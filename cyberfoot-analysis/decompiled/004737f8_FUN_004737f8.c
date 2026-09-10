// Address: 004737f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004737f8(void)

{
  int iVar1;
  
  iVar1 = FUN_00429e64();
  if (iVar1 == 0x1fffffff) {
    return -1;
  }
  if (iVar1 == 0x20000000) {
    iVar1 = -0x1000000;
  }
  return iVar1;
}

