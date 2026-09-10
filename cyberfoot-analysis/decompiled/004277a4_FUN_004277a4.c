// Address: 004277a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004277a4(void)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  FUN_00426ea4(iVar1,extraout_EDX & 0xfffffffc);
  if (*(int *)(iVar1 + 0x30) != 0) {
    FUN_00427158(*(int *)(iVar1 + 0x30),iVar1);
  }
  while (0 < *(int *)(*(int *)(iVar1 + 0x50) + 8)) {
    uVar2 = FUN_0041e104(*(int *)(iVar1 + 0x50));
    FUN_004278e4(iVar1,uVar2);
  }
  FUN_0040fe60(iVar1 + 0x50);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

