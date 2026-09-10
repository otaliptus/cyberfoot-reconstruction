// Address: 004dea9c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dea9c(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 *local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = (undefined4 *)&stack0xfffffffc;
  iVar5 = 5;
  do {
    local_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_20 = &LAB_004dec0d;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (undefined4 *)0x4deaca;
  FUN_004051d4(param_2,param_1[0xe]);
  uVar6 = true;
  local_28 = (undefined4 *)0x4dead3;
  FUN_00405378(*param_2);
  if (!(bool)uVar6) {
    piVar1 = (int *)*param_1;
    local_28 = (undefined4 *)0x4deae5;
    FUN_004dda80(piVar1,&stack0xfffffff0);
    local_28 = (undefined4 *)0x4deaf0;
    FUN_004ddaf0(unaff_EBX,&local_8);
    local_28 = (undefined4 *)0x4deafb;
    FUN_00404b6c(&stack0xffffffec,local_8);
    local_28 = (undefined4 *)0x4deb06;
    FUN_00404cf0(unaff_ESI,param_1[0xe]);
    if ((bool)uVar6) {
      local_28 = (undefined4 *)0x4deb12;
      FUN_0040502c(param_2,local_8);
    }
    else if ((*(char *)(*(int *)PTR_DAT_0066b3ac + 0x7c) != '\0') && (piVar1 != (int *)0x0)) {
      local_28 = (undefined4 *)0x4deb37;
      uVar4 = (**(code **)(*piVar1 + 0x3c))();
      local_28 = (undefined4 *)0x4deb42;
      cVar3 = FUN_00403c10(uVar4,PTR_PTR_00472158);
      if (cVar3 != '\0') {
        local_28 = (undefined4 *)0x4deb51;
        iVar5 = (**(code **)(*piVar1 + 0x3c))();
        uVar4 = CONCAT22((short)((uint)piVar1 >> 0x10),*(short *)(iVar5 + 0x84));
        uVar6 = *(short *)(iVar5 + 0x84) == 0;
        if (!(bool)uVar6) {
          local_28 = &local_c;
          local_24 = local_8;
          local_20._0_1_ = 0xf;
          local_2c = (undefined4 *)0x4deb75;
          FUN_00476234(uVar4,&local_28);
          local_1c = local_28;
          local_2c = (undefined4 *)0x4deb91;
          FUN_0040ae64("%s (%s)",&local_24,1);
          local_28 = (undefined4 *)0x4deb9c;
          FUN_00404cf0(local_c,param_1[0xe]);
          if ((bool)uVar6) {
            local_24 = local_8;
            local_20 = (undefined1 *)CONCAT31(local_20._1_3_,0xf);
            local_2c = (undefined4 *)0x4debb3;
            local_28 = param_2;
            FUN_004db940(uVar4,&local_2c);
            local_1c = local_2c;
            local_2c = (undefined4 *)0x4debcf;
            FUN_0040b460(L"%s (%s)",&local_24,1);
          }
        }
      }
    }
  }
  puVar2 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = (undefined4 *)&LAB_004dec14;
  local_20 = (undefined1 *)0x4debe4;
  FUN_00404ff0(&local_2c,local_24,puVar2);
  local_20 = (undefined1 *)0x4debec;
  FUN_004048d4(&local_28);
  local_20 = (undefined1 *)0x4debf4;
  FUN_004048d4(&stack0xffffffec);
  local_20 = (undefined1 *)0x4debfc;
  FUN_00404ff0(&stack0xfffffff0);
  local_20 = (undefined1 *)0x4dec04;
  FUN_004048d4(&local_c);
  local_20 = (undefined1 *)0x4dec0c;
  FUN_00404ff0(&local_8);
  return;
}

