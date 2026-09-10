// Address: 0041dba8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041dba8(undefined *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  undefined1 local_108 [256];
  undefined4 local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = 0;
  puStack_118 = &LAB_0041dc3e;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  puVar2 = &stack0xfffffffc;
  if ((param_1 != PTR_PTR_0041c690) &&
     (puVar2 = &stack0xfffffffc, param_1 != *(undefined **)(param_4 + -8))) {
    FUN_00403a10(param_1);
    FUN_0041dba8();
    FUN_004039d4(param_1,local_108,param_4);
    FUN_00404b48(&local_8,local_108);
    uVar1 = local_8;
    FUN_00406260(param_1);
    uVar3 = FUN_004062b0();
    FUN_0041da40(uVar1,uVar3,param_4 + -4);
    puVar2 = puStack_114;
  }
  puStack_114 = puVar2;
  puVar2 = puStack_114;
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_0041dc45;
  puStack_118 = (undefined1 *)0x41dc3d;
  FUN_004048d4(&local_8,uStack_11c,puVar2);
  return;
}

