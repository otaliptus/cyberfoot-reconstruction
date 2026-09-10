// Address: 0042cc14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_0042cc14(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  if (param_2 != (int *)0x0) {
    puStack_20 = (undefined1 *)0x42cc2c;
    iVar5 = FUN_004039cc(param_1);
    puStack_20 = (undefined1 *)0x42cc35;
    iVar6 = FUN_004039cc(param_2);
    if (iVar5 == iVar6) {
      bVar2 = true;
      goto LAB_0042cc3f;
    }
  }
  bVar2 = false;
LAB_0042cc3f:
  puStack_20 = (undefined1 *)0x42cc49;
  cVar3 = (**(code **)(*param_1 + 0x1c))();
  if (cVar3 == '\0') {
    puStack_20 = (undefined1 *)0x42cc54;
    cVar3 = (**(code **)(*param_2 + 0x1c))();
    if (cVar3 == '\0') {
      if (!bVar2) {
        return 0;
      }
      puStack_20 = (undefined1 *)0x42cc92;
      puVar7 = (undefined4 *)FUN_00403a54(PTR_PTR_0041c090,1);
      puStack_24 = &LAB_0042cd4b;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_2c = (undefined1 *)0x42ccad;
      puStack_20 = &stack0xfffffffc;
      (**(code **)(*param_1 + 0x44))(param_1,puVar7);
      puStack_2c = (undefined1 *)0x42ccb9;
      puVar8 = (undefined4 *)FUN_00403a54(PTR_PTR_0041c090,1);
      puStack_30 = &LAB_0042cd2e;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      puStack_2c = &stack0xfffffffc;
      (**(code **)(*param_2 + 0x44))(param_2,puVar8);
      iVar5 = (**(code **)*puVar7)();
      iVar6 = (**(code **)*puVar8)();
      if (extraout_EDX_00 == extraout_EDX && iVar6 == iVar5) {
        uVar9 = (**(code **)*puVar7)();
        FUN_00409658(puVar7[1],puVar8[1],uVar9);
      }
      puVar1 = puStack_2c;
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_0042cd35;
      puStack_30 = (undefined1 *)0x42cd2d;
      uVar4 = FUN_00403a84(puVar8,uStack_34,puVar1);
      return uVar4;
    }
  }
  puStack_20 = (undefined1 *)0x42cc5f;
  cVar3 = (**(code **)(*param_1 + 0x1c))();
  if (cVar3 != '\0') {
    puStack_20 = (undefined1 *)0x42cc6a;
    cVar3 = (**(code **)(*param_2 + 0x1c))();
    if (cVar3 != '\0') {
      return 1;
    }
  }
  return 0;
}

