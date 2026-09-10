// Address: 0053d5b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0053d5b0(int param_1,undefined1 param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  int *in_FS_OFFSET;
  bool bVar4;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_c;
  undefined1 local_5;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_0053d6ba;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  local_5 = param_2;
  cVar2 = FUN_00466430(param_1);
  if (cVar2 != '\0') {
    if ((((param_3 < 0) || (*(int *)(param_1 + 0x48) < param_3)) || (param_4 < 0)) ||
       (*(int *)(param_1 + 0x4c) < param_4)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    FUN_0053d274(param_1,uVar3);
  }
  FUN_0053c144(param_1,param_3,param_4);
  if (local_c == 0) {
    if (*(short *)(param_1 + 0x78) == -0x15) {
      FUN_00466414(param_1,*(undefined2 *)(param_1 + 0x260));
      if (*(short *)(param_1 + 0x23a) != 0) {
        (**(code **)(param_1 + 0x238))(*(undefined4 *)(param_1 + 0x23c),param_1,local_c);
      }
    }
  }
  else {
    bVar4 = *(short *)(param_1 + 0x78) == 0;
    if (!bVar4) {
      FUN_00404cf0(*(undefined4 *)(param_1 + 0x220),local_c);
      if (bVar4) goto LAB_0053d694;
    }
    FUN_00404928(param_1 + 0x220,local_c);
    FUN_00466414(param_1,CONCAT22(extraout_var,0xffeb));
    if (*(short *)(param_1 + 0x232) != 0) {
      (**(code **)(param_1 + 0x230))(*(undefined4 *)(param_1 + 0x234),param_1,local_c);
    }
  }
LAB_0053d694:
  FUN_00467a98(param_1,local_5,param_3,param_4);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = (int)&local_c;
  puStack_1c = &LAB_0053d6c1;
  iStack_20 = 0x53d6b9;
  FUN_004048d4(&local_c,&local_c,puVar1);
  return;
}

