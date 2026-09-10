// Address: 004c7b94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004c7b94(int param_1)

{
  uint uVar1;
  int iVar2;
  
  do {
    iVar2 = param_1;
    param_1 = *(int *)(iVar2 + 0x30);
  } while (param_1 != 0);
  uVar1 = FUN_004673cc(iVar2,0x129,0,0);
  if ((uVar1 & 2) != 2) {
    return 0;
  }
  return 0x100000;
}

