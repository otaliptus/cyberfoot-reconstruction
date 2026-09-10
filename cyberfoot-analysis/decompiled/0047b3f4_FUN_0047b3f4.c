// Address: 0047b3f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0047b3f4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (PTR_DAT_0066b7ac[0xd] != '\0') {
    if (*(char *)(param_1 + 0x41) == '\0') {
      uVar2 = (uint)(*(char *)(param_1 + 0x30) == '\x01');
    }
    else {
      iVar1 = FUN_00476150(param_1 + 0x58);
      if (iVar1 == 0) {
        uVar2 = FUN_00486598(*(undefined4 *)PTR_DAT_0066b3ac);
      }
      else {
        uVar2 = FUN_00403c80();
      }
    }
  }
  return uVar2;
}

