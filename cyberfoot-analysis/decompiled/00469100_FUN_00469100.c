// Address: 00469100
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00469100(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  if ((((char)param_1[0x6a] != '\0') && (*(char *)((int)param_1 + 0x1a7) != '\0')) &&
     (param_1[0x5f] != 0)) {
    puStack_1c = (undefined1 *)0x469144;
    (**(code **)(*(int *)param_1[0x5f] + 0x2c))((int *)param_1[0x5f],0);
  }
  puStack_20 = (undefined1 *)0x46914a;
  puStack_1c = &stack0xfffffffc;
  cVar2 = FUN_004690ac();
  if (cVar2 != '\0') {
    puStack_1c = (undefined1 *)0x469161;
    (**(code **)(*param_1 + 0x8c))(param_1,param_3);
    puStack_1c = (undefined1 *)0x46916d;
    uVar3 = FUN_00403a54(PTR_PTR_0041b73c,1);
    puStack_20 = &LAB_004691df;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_00468f3c(1);
    FUN_00468f3c(2);
    FUN_00468f3c(3);
    FUN_00468f3c(4);
    FUN_00468f3c(5);
    FUN_00468f3c(6);
    FUN_00468f3c(0);
    FUN_00403c80(param_1);
    puVar1 = puStack_1c;
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x4691e6;
    puStack_20 = (undefined1 *)0x4691de;
    FUN_00403a84(uVar3,uStack_24,puVar1);
    return;
  }
  if (*(char *)((int)param_1 + 0x1a6) != '\0') {
    puStack_1c = (undefined1 *)0x4691fe;
    FUN_00403c80(param_1);
  }
  return;
}

