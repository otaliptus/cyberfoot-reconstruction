// Address: 0043078c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043078c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_14 = (undefined1 *)0x2;
  uStack_18 = 0x4307a4;
  puStack_10 = (undefined1 *)param_3;
  puVar2 = (undefined4 *)FUN_00421234(PTR_PTR_0041c10c,1,param_2);
  puStack_14 = &LAB_004307e0;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  uVar3 = (**(code **)*puVar2)();
  FUN_00430914(param_1,puVar2,uVar3);
  puVar1 = puStack_14;
  *in_FS_OFFSET = 0;
  puStack_14 = &LAB_004307e7;
  uStack_18 = 0x4307df;
  FUN_00403a84(puVar2,0,puVar1);
  return;
}

