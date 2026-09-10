// Address: 005bf6dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bf6dc(int param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  LPVOID pvVar4;
  SIZE_T SVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = &stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  iVar1 = *(int *)(param_1 + 0x214);
  puStack_20 = &LAB_005bf7ac;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_2c = &LAB_005bf79b;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar2 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  if (iVar1 == 0) {
    FUN_005be3f0(param_1);
    puVar2 = puStack_28;
    puVar3 = puStack_1c;
  }
  puStack_1c = puVar3;
  puStack_28 = puVar2;
  pvVar4 = GlobalLock(*(HGLOBAL *)(param_1 + 0x214));
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  SVar5 = GlobalSize(*(HGLOBAL *)(param_1 + 0x214));
  (**(code **)(*param_2 + 0x10))(param_2,pvVar4,SVar5);
  *in_FS_OFFSET = uStack_3c;
  uStack_3c = 0x5bf777;
  GlobalUnlock(*(HGLOBAL *)(param_1 + 0x214));
  return;
}

