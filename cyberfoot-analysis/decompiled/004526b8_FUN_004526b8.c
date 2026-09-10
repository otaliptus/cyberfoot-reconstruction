// Address: 004526b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004526b8(int *param_1,int param_2)

{
  int iVar1;
  int nSavedDC;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  puVar5 = &stack0xfffffffc;
  if (param_1[0x84] != 0) {
    iVar1 = *(int *)(param_2 + 8);
    uVar3 = (uint)*(ushort *)(iVar1 + 0x10);
    nSavedDC = SaveDC(*(HDC *)(iVar1 + 0x18));
    FUN_0042b03c(param_1[0x84]);
    uVar4 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffd8;
    FUN_0042b628(param_1[0x84],*(undefined4 *)(iVar1 + 0x18));
    FUN_0042b4a4(param_1[0x84],param_1[0x1a]);
    FUN_0042b4c0(param_1[0x84],param_1[0x5c]);
    if (*(int *)(iVar1 + 8) == -1) {
      FUN_0042af8c(param_1[0x84],iVar1 + 0x1c);
    }
    else {
      uVar2 = FUN_0044e8f4(param_1[0x8b],*(int *)(iVar1 + 8));
      (**(code **)(*param_1 + 0x110))(param_1,uVar2,iVar1 + 0x1c,uVar3);
    }
    *in_FS_OFFSET = uVar4;
    FUN_0042b628(param_1[0x84],0,puVar5);
    FUN_0042b47c(param_1[0x84]);
    RestoreDC(*(HDC *)(iVar1 + 0x18),nSavedDC);
    return;
  }
  return;
}

