// Address: 0051e15c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051e15c(int *param_1,int param_2,int param_3,uint param_4,int param_5)

{
  bool bVar1;
  undefined1 *puVar2;
  short sVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  char local_d;
  int local_c;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  puStack_30 = &LAB_0051e2b3;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_c = param_3;
  local_8 = param_2;
  sVar3 = FUN_0051d4c8(param_1,3);
  if ((sVar3 == *(short *)((int)param_1 + 0x29)) && (param_4 == *(ushort *)((int)param_1 + 0x2b))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  *(undefined2 *)((int)param_1 + 0x25) = (undefined2)local_8;
  *(undefined2 *)((int)param_1 + 0x27) = (undefined2)local_c;
  *(undefined2 *)((int)param_1 + 0x29) = (undefined2)param_5;
  *(short *)((int)param_1 + 0x2b) = (short)param_4;
  if (bVar1) {
    FUN_0051d460(param_1);
    FUN_0051d47c(param_1);
    FUN_0051d418(param_1);
    FUN_0051d3bc(param_1);
  }
  local_d = '\0';
  iVar4 = (**(code **)(*(int *)param_1[1] + 0x2c))();
  if (iVar4 < local_8 + param_5) {
    iVar4 = (**(code **)(*(int *)param_1[1] + 0x2c))();
    if (0 < iVar4) {
      local_d = '\x01';
      FUN_00406d44(&PTR_DAT_005166ec,&local_14);
      (**(code **)(*param_1 + 0x10))(param_1,1,local_14);
    }
    (**(code **)(*(int *)param_1[1] + 0x40))((int *)param_1[1],local_8 + param_5);
  }
  iVar4 = (**(code **)(*(int *)param_1[1] + 0x20))();
  if (iVar4 < (int)(local_c + param_4)) {
    iVar4 = (**(code **)(*(int *)param_1[1] + 0x20))();
    if (0 < iVar4) {
      local_d = '\x01';
      FUN_00406d44(&PTR_DAT_005166e4,&local_18);
      (**(code **)(*param_1 + 0x10))(param_1,1,local_18);
    }
    (**(code **)(*(int *)param_1[1] + 0x34))((int *)param_1[1],local_c + param_4);
  }
  if (local_d != '\0') {
    FUN_00406d44(&PTR_DAT_005166fc,&local_1c);
    (**(code **)(*param_1 + 0x10))(param_1,1,local_1c);
  }
  puVar2 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0051e2ba;
  puStack_30 = (undefined1 *)0x51e2b2;
  FUN_004048f8(&local_1c,3,puVar2);
  return;
}

