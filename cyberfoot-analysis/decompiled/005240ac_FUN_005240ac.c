// Address: 005240ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005240ac(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  SIZE_T dwBytes;
  LPVOID pvVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_54;
  undefined4 uStack_48;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  HGLOBAL local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  puStack_28 = &LAB_0052421f;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  uStack_30 = 0x5240d6;
  local_8 = param_3;
  cVar2 = (**(code **)(*param_1 + 0x1c))();
  puVar1 = puStack_24;
  if (cVar2 != '\0') {
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = &LAB_00524226;
    puStack_28 = (undefined1 *)0x52421e;
    FUN_004048d4(&local_14,uStack_2c,puVar1);
    return;
  }
  uStack_30 = param_4;
  puStack_34 = (undefined1 *)0x5240e9;
  piVar3 = (int *)FUN_0052353c(param_1);
  puStack_34 = (undefined1 *)0x5240f3;
  (**(code **)(*piVar3 + 0x60))(piVar3,param_2,local_8);
  puStack_34 = (undefined1 *)0x5240ff;
  local_c = (undefined4 *)FUN_00403a54(PTR_PTR_0041c090,1);
  puStack_38 = &LAB_00524202;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x58))(param_1,local_c);
  uStack_48 = 0x524126;
  FUN_004208f4(local_c);
  dwBytes = (**(code **)*local_c)();
  uStack_48 = 0x52413c;
  local_10 = GlobalAlloc((uint)*(ushort *)PTR_DAT_0066b538,dwBytes);
  puVar1 = puStack_34;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  if (local_10 != (HGLOBAL)0x0) {
    pvVar4 = GlobalLock(local_10);
    uStackY_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_54;
    uVar5 = (**(code **)*local_c)();
    FUN_00402a04(local_c[1],pvVar4,uVar5);
    *in_FS_OFFSET = uStackY_54;
    uStackY_54 = 0x524198;
    GlobalUnlock(local_10);
    return;
  }
  *in_FS_OFFSET = uStack_48;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = (undefined1 *)0x524209;
  puStack_38 = (undefined1 *)0x524201;
  FUN_00403a84(local_c,uStack_3c,puVar1);
  return;
}

