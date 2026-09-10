// Address: 00441fc0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00441fc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x441fd8;
  iVar4 = FUN_00441f28(param_1);
  if (iVar4 != 0) {
    puStack_20 = &LAB_00442072;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    uVar1 = *(undefined4 *)(param_1 + 4);
    puStack_28 = (undefined1 *)0x442007;
    puStack_1c = &stack0xfffffffc;
    FUN_00441934(param_1,iVar4);
    puStack_2c = &LAB_00442054;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    cVar3 = FUN_00441f18(param_1,param_3);
    if (cVar3 == '\0') {
      FUN_00404928(param_4,param_5);
    }
    else {
      FUN_00441d94(param_1,param_3,param_4);
    }
    puVar2 = puStack_28;
    *in_FS_OFFSET = uStack_30;
    puStack_28 = &LAB_0044205b;
    puStack_2c = (undefined1 *)0x442053;
    FUN_00441934(param_1,uVar1,puVar2);
    return;
  }
  puStack_1c = (undefined1 *)0x442083;
  FUN_00404928(param_4,param_5);
  return;
}

