// Address: 004749a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_004749a8(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  if (param_2 != (int *)0x0) {
    puStack_20 = (undefined1 *)0x4749c0;
    iVar3 = FUN_00473f5c(param_1);
    puStack_20 = (undefined1 *)0x4749c9;
    iVar4 = FUN_00473f5c(param_2);
    if (iVar3 == iVar4) {
      puStack_20 = (undefined1 *)0x4749dd;
      iVar3 = FUN_00473f5c(param_1);
      if (iVar3 == 0) {
        puStack_20 = (undefined1 *)0x4749e8;
        iVar3 = FUN_00473f5c(param_2);
        if (iVar3 == 0) {
          return 1;
        }
      }
      puStack_20 = (undefined1 *)0x474a01;
      uVar5 = FUN_00403a54(PTR_PTR_0041c090,1);
      puStack_24 = &LAB_00474a84;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_2c = (undefined1 *)0x474a1c;
      puStack_20 = &stack0xfffffffc;
      (**(code **)(*param_1 + 0x3c))(param_1,uVar5);
      puStack_2c = (undefined1 *)0x474a28;
      uVar6 = FUN_00403a54(PTR_PTR_0041c090,1);
      puStack_30 = &LAB_00474a67;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      puStack_2c = &stack0xfffffffc;
      (**(code **)(*param_2 + 0x3c))(param_2,uVar6);
      FUN_00474964(uVar5,uVar6);
      puVar1 = puStack_2c;
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_00474a6e;
      puStack_30 = (undefined1 *)0x474a66;
      uVar2 = FUN_00403a84(uVar6,uStack_34,puVar1);
      return uVar2;
    }
  }
  return 0;
}

