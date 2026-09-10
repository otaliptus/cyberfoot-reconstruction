// Address: 004d7960
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d7960(int *param_1,int *param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_004d7ad5;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x4d798d;
  local_8 = param_1;
  FUN_004d5774(param_1);
  puStack_38 = &LAB_004d7aa3;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  if (param_3 == '\0') {
    cVar2 = '\x01';
    puStack_34 = &stack0xfffffffc;
  }
  else {
    puStack_34 = &stack0xfffffffc;
    cVar2 = FUN_004d7fac(param_2);
  }
  iVar3 = (**(code **)*param_2)();
  iVar4 = FUN_004208d4(param_2);
  uVar6 = iVar3 - iVar4;
  if ((byte)(cVar2 - 1U) < 2) {
    if ((int)uVar6 < 2) {
      FUN_00404ff0(&local_c);
    }
    else {
      iVar3 = (int)uVar6 >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((uVar6 & 1) != 0);
      }
      FUN_004055c4(&local_c,iVar3);
      uVar5 = FUN_00405250(local_c);
      (**(code **)(*param_2 + 0xc))(param_2,uVar5,uVar6);
      if (cVar2 == '\x02') {
        FUN_00405250(local_c);
        FUN_004d4f78();
      }
    }
    (**(code **)(*local_8 + 0x2c))(local_8,local_c);
  }
  else if (cVar2 == '\x03') {
    FUN_00404f30(&local_10,uVar6);
    uVar5 = FUN_00404da4(local_10);
    (**(code **)(*param_2 + 0xc))(param_2,uVar5,uVar6);
    FUN_004d459c(local_10,&local_14);
    (**(code **)(*local_8 + 0x2c))(local_8,local_14);
  }
  else {
    FUN_00404f30(&local_10,uVar6);
    uVar5 = FUN_00404da4(local_10);
    (**(code **)(*param_2 + 0xc))(param_2,uVar5,uVar6);
    FUN_004051d4(&local_18,local_10);
    (**(code **)(*local_8 + 0x2c))(local_8,local_18);
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_004d7aaa;
  puStack_38 = (undefined1 *)0x4d7aa2;
  FUN_004d5830(local_8,uStack_3c,puVar1);
  return;
}

