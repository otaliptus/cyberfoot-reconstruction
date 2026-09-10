// Address: 0044f7e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044f7e0(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x44f7f0;
  FUN_004699b8(param_1);
  puStack_10 = (undefined1 *)0x44f7f8;
  FUN_0044fea8(param_1);
  puStack_10 = (undefined1 *)0x44f806;
  FUN_004502b8(param_1,*(undefined4 *)(param_1 + 0x70));
  puStack_10 = (undefined1 *)0x44f817;
  FUN_00450298(param_1,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x18));
  puStack_10 = (undefined1 *)0x44f828;
  FUN_004502ec(param_1,*(undefined4 *)(param_1 + 0x268));
  if (*(int *)(param_1 + 0x240) != 0) {
    puStack_10 = (undefined1 *)0x44f846;
    FUN_0044e9d8(*(undefined4 *)(param_1 + 0x22c));
    *(undefined1 *)(param_1 + 0x289) = 1;
    puStack_14 = &LAB_0044f90a;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    FUN_0041ed0c(*(undefined4 *)(param_1 + 0x23c));
    FUN_00420c64(*(undefined4 *)(param_1 + 0x240),param_1);
    (**(code **)(**(int **)(param_1 + 0x240) + -4))(*(int **)(param_1 + 0x240),1);
    *(undefined4 *)(param_1 + 0x240) = 0;
    if (*(char *)(param_1 + 0x244) != '\0') {
      FUN_0044e99c(*(undefined4 *)(param_1 + 0x22c),*(undefined4 *)(param_1 + 0x2a0));
    }
    if (*(char *)(param_1 + 0x274) != '\0') {
      FUN_0044ffa4(param_1);
    }
    FUN_0044f72c();
    FUN_004662fc(param_1,*(undefined4 *)(param_1 + 0x68),&stack0xfffffffc);
    puVar1 = puStack_10;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x44f911;
    puStack_14 = (undefined1 *)0x44f8ff;
    FUN_0044ebb4(*(undefined4 *)(param_1 + 0x22c),uStack_18,puVar1);
    *(undefined1 *)(param_1 + 0x289) = 0;
    return;
  }
  puStack_10 = (undefined1 *)0x44f91f;
  FUN_0044dbe4(*(undefined4 *)(param_1 + 0x23c));
  if (*(int *)(param_1 + 0x218) != 0) {
    puStack_10 = (undefined1 *)0x44f933;
    cVar2 = FUN_004739fc(*(int *)(param_1 + 0x218));
    if (cVar2 != '\0') {
      puStack_10 = (undefined1 *)0x44f945;
      uVar3 = FUN_00473bd0(*(undefined4 *)(param_1 + 0x218));
      puStack_10 = (undefined1 *)0x44f951;
      FUN_0044fa44(param_1,uVar3,0);
    }
  }
  if (*(int *)(param_1 + 0x21c) != 0) {
    puStack_10 = (undefined1 *)0x44f965;
    cVar2 = FUN_004739fc(*(int *)(param_1 + 0x21c));
    if (cVar2 != '\0') {
      puStack_10 = (undefined1 *)0x44f977;
      uVar3 = FUN_00473bd0(*(undefined4 *)(param_1 + 0x21c));
      puStack_10 = (undefined1 *)0x44f986;
      FUN_0044fa44(param_1,uVar3,1);
    }
  }
  if (*(int *)(param_1 + 0x220) != 0) {
    puStack_10 = (undefined1 *)0x44f99a;
    cVar2 = FUN_004739fc(*(int *)(param_1 + 0x220));
    if (cVar2 != '\0') {
      puStack_10 = (undefined1 *)0x44f9ac;
      uVar3 = FUN_00473bd0(*(undefined4 *)(param_1 + 0x220));
      puStack_10 = (undefined1 *)0x44f9bb;
      FUN_0044fa44(param_1,uVar3,2);
    }
  }
  puStack_10 = (undefined1 *)0x44f9c3;
  FUN_004524f0(param_1);
  return;
}

