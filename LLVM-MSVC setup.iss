#dim Version[4]
#expr ParseVersion("bin\clang-cl.exe", Version[0], Version[1], Version[2], Version[3])
#define MyAppVersion Str(Version[0]) + "." + Str(Version[1]) + "." + Str(Version[2]) + "." + Str(Version[3])
#define MyAppName "llvm-msvc"
#define MyAppExeName "llvm-msvc_X86_64.exe"

[Setup]
AppName={#MyAppName}
AppVersion={#MyAppVersion}
AppId={#MyAppName}
DefaultDirName="{src}\llvm-msvc_X86_64"
Compression=lzma2
SolidCompression=yes
DisableReadyPage=no
DisableReadyMemo=no
DisableStartupPrompt=yes
DisableFinishedPage=yes
Uninstallable=yes
OutputDir=Output\
OutputBaseFilename=llvm-msvc_X86_64_installer
PrivilegesRequired=admin



[Files]

;bin
Source: "bin\*.*"; DestDir: "{app}\bin\"; Flags: ignoreversion

;lib
Source: "lib\*"; DestDir: "{app}\lib"; Flags: ignoreversion recursesubdirs

;doc
Source: "doc\*"; DestDir: "{app}\doc"; Flags: ignoreversion recursesubdirs



;template
Source: "InstallTemplate.bat"; DestDir: "{app}\template\"; Flags: ignoreversion
Source: "UnInstallTemplate.bat"; DestDir: "{app}\template\"; Flags: ignoreversion
Source: "LLVM-MSVC\*"; DestDir: "{app}\template\LLVM-MSVC"; Flags: ignoreversion recursesubdirs
Source: "LLVM-MSVC_v140\*"; DestDir: "{app}\template\LLVM-MSVC_v140"; Flags: ignoreversion recursesubdirs
Source: "LLVM-MSVC_v140_xp\*"; DestDir: "{app}\template\LLVM-MSVC_v140_xp"; Flags: ignoreversion recursesubdirs
Source: "LLVM-MSVC_v141\*"; DestDir: "{app}\template\LLVM-MSVC_v141"; Flags: ignoreversion recursesubdirs
Source: "LLVM-MSVC_v141_xp\*"; DestDir: "{app}\template\LLVM-MSVC_v141_xp"; Flags: ignoreversion recursesubdirs
Source: "LLVM-MSVC_v142\*"; DestDir: "{app}\template\LLVM-MSVC_v142"; Flags: ignoreversion recursesubdirs
Source: "LLVM-MSVC_v143\*"; DestDir: "{app}\template\LLVM-MSVC_v143"; Flags: ignoreversion recursesubdirs
Source: "LLVM-MSVC_KernelMode\*"; DestDir: "{app}\template\LLVM-MSVC_KernelMode"; Flags: ignoreversion recursesubdirs

[Languages]
Name: "en"; MessagesFile: "compiler:Default.isl"
Name: "tc"; MessagesFile: "compiler:Languages\ChineseTraditional.isl"
Name: "jp"; MessagesFile: "compiler:Languages\Japanese.isl"
Name: "de"; MessagesFile: "compiler:Languages\German.isl"

[Registry]
 Root: HKLM; Subkey: "SOFTWARE\LLVM\LLVM-MSVC"; ValueType: "string"; ValueData: "{app}"

[Run]
Filename: {app}\template\InstallTemplate.bat; Flags: shellexec runhidden nowait; 

[Code]
procedure CurUninstallStepChanged(CurUninstallStep: TUninstallStep);
var
   ReturnCode:   Integer;
begin
  if CurUninstallStep = usUninstall then begin
    Exec(ExpandConstant('{app}\template\UnInstallTemplate.bat'), '', '', SW_HIDE, ewWaitUntilTerminated, ReturnCode);
    RegDeleteKeyIncludingSubkeys(HKEY_LOCAL_MACHINE, 'Software\LLVM\LLVM-MSVC');

    DelTree(ExpandConstant('{app}\bin'), True, True, True);
    DelTree(ExpandConstant('{app}\lib'), True, True, True);
    DelTree(ExpandConstant('{app}\doc'), True, True, True);

  end;
end;

function InitializeSetup(): Boolean;
begin

	Result := true;
end;
