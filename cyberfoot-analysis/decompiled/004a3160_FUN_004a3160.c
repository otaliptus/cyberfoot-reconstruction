// Address: 004a3160
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a3160(int param_1)

{
  int iVar1;
  byte *pbVar2;
  
  FUN_004a29cc(param_1,param_1 + 0x94,*(undefined4 *)(param_1 + 0xb1c));
  FUN_004a29cc(param_1,param_1 + 0x988,*(undefined4 *)(param_1 + 0xb28));
  FUN_004a27bc(param_1,param_1 + 0xb30);
  iVar1 = 0x12;
  pbVar2 = &DAT_0066703a;
  do {
    if (*(short *)(param_1 + 0xa7e + (uint)*pbVar2 * 4) != 0) break;
    iVar1 = iVar1 + -1;
    pbVar2 = pbVar2 + -1;
  } while (2 < iVar1);
  *(int *)(param_1 + 0x16a8) = *(int *)(param_1 + 0x16a8) + iVar1 * 3 + 0x11;
  return;
}

