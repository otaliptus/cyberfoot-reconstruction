// Address: 004b1f2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_004b1f2c(void)

{
  _OSVERSIONINFOA local_98;
  
  local_98.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_98);
  return 5 < local_98.dwMajorVersion;
}

