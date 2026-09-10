// Address: 00424438
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00424438(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 *local_8;
  
  puStack_14 = (undefined1 *)0x42444d;
  local_8 = (undefined4 *)FUN_00403a54(PTR_PTR_0041c090,1);
  puStack_18 = &LAB_004244af;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  (*param_4)(param_5,local_8);
  FUN_00426644(param_1,10);
  local_c = (**(code **)*local_8)();
  FUN_004243ec(param_1,&local_c,4);
  FUN_004243ec(param_1,local_8[1],local_c);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004244b6;
  puStack_18 = (undefined1 *)0x4244ae;
  FUN_00403a84(local_8,uStack_1c,puVar1);
  return;
}

