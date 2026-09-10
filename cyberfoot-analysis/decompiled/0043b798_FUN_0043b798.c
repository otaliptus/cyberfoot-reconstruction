// Address: 0043b798
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043b798(int *param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  
  puStack_2c = &stack0xfffffffc;
  if ((char)param_1[0x17] == '\0') {
    puStack_2c = (undefined1 *)0x43b8cb;
    FUN_0046b694(param_1,param_2);
  }
  else {
    *(undefined1 *)(param_1 + 0x84) = 1;
    puStack_30 = &LAB_0043b8b9;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    iVar3 = *(int *)(param_2 + 4);
    cVar1 = *(char *)((int)param_1 + 0x5b);
    if (cVar1 == '\x01') {
      puVar2 = &stack0xfffffffc;
      if (param_1[0x13] == 0) {
        FUN_004659e8(param_1,*(int *)(iVar3 + 0x50) - *(int *)(iVar3 + 0x48));
        puVar2 = puStack_2c;
      }
    }
    else if (cVar1 == '\x02') {
      puVar2 = &stack0xfffffffc;
      if (param_1[0x13] == 0) {
        iVar3 = *(int *)(iVar3 + 0x50) - *(int *)(iVar3 + 0x48);
        puStack_2c = &stack0xfffffffc;
        (**(code **)(*param_1 + 0x84))
                  (param_1,param_1[0x10],param_1[0x11] - iVar3,iVar3,param_1[0x12]);
        puVar2 = puStack_2c;
      }
    }
    else if (cVar1 == '\x03') {
      puVar2 = &stack0xfffffffc;
      if (param_1[0x12] == 0) {
        puStack_2c = &stack0xfffffffc;
        FUN_004659c4(param_1,*(int *)(iVar3 + 0x4c) - *(int *)(iVar3 + 0x44));
        puVar2 = puStack_2c;
      }
    }
    else {
      puVar2 = &stack0xfffffffc;
      if ((cVar1 == '\x04') && (puVar2 = &stack0xfffffffc, param_1[0x12] == 0)) {
        iVar3 = *(int *)(iVar3 + 0x4c) - *(int *)(iVar3 + 0x44);
        puStack_2c = &stack0xfffffffc;
        (**(code **)(*param_1 + 0x84))
                  (param_1,param_1[0x10] - iVar3,param_1[0x11],param_1[0x13],iVar3);
        puVar2 = puStack_2c;
      }
    }
    puStack_2c = puVar2;
    FUN_0046b694(param_1,param_2);
    FUN_004042fc();
  }
  return;
}

