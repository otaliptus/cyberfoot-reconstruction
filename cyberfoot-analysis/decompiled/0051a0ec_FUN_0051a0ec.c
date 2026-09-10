// Address: 0051a0ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051a0ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uStack_8;
  
  if (*(int *)(param_1 + 8) != 0) {
    uStack_8 = param_3;
    FUN_00420b38(param_2,*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8) * 3);
    bVar2 = FUN_0051a874(param_1);
    uVar1 = (ushort)uStack_8;
    uStack_8 = (uint)(uVar1 & 0xff);
    for (iVar3 = (1 << (bVar2 & 0x1f)) - *(int *)(param_1 + 8); 0 < iVar3; iVar3 = iVar3 + -1) {
      FUN_00420b38(param_2,(int)&uStack_8 + 1,3);
    }
  }
  return;
}

