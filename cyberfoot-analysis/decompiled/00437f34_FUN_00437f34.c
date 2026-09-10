// Address: 00437f34
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00437f34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x437f55;
  piVar2 = (int *)FUN_0043794c(param_1,param_2,param_3);
  puStack_20 = &LAB_00437fd3;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00465b70(piVar2,param_7);
  FUN_00404928(piVar2 + 0x8f,param_4);
  if (-1 < param_6) {
    FUN_00465978(piVar2,param_6);
  }
  if (-1 < param_5) {
    FUN_0046599c(piVar2,param_5);
  }
  if ((param_5 < 0) && (param_6 < 0)) {
    FUN_00481838(piVar2,4);
  }
  (**(code **)(*piVar2 + 0xec))();
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00437fda;
  puStack_20 = (undefined1 *)0x437fd2;
  FUN_00403a84(piVar2,uStack_24,puVar1);
  return;
}

