// Address: 004ab134
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ab134(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4ab14d;
  piVar2 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_1c = &LAB_004ab199;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  (**(code **)(*piVar2 + 0x5c))(piVar2,param_2,param_3);
  uVar4 = 0;
  uVar3 = (**(code **)(*piVar2 + 100))();
  FUN_004ab528(param_1,uVar3,0,uVar4);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = param_4;
  puStack_1c = &LAB_004ab1a0;
  uStack_20 = 0x4ab198;
  FUN_00403a84(piVar2,param_4,puVar1);
  return;
}

