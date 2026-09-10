// Address: 0043f7c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043f7c0(int *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0043f849;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00466208(param_1,&local_8);
  cVar2 = FUN_0047e450(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),local_8);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_1 + 0x50))();
    if ((((cVar2 != '\0') && (*(char *)((int)param_1 + 0x57) != '\0')) && (param_1[0xc] != 0)) &&
       (*(char *)(param_1[0xc] + 0x1a6) != '\0')) {
      FUN_00403c80(param_1);
      *(undefined4 *)(param_2 + 0xc) = 1;
      goto LAB_0043f833;
    }
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
LAB_0043f833:
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0043f850;
  puStack_18 = (undefined1 *)0x43f848;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

