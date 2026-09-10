// Address: 00504934
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00504934(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_8 = 0;
  puStack_30 = &LAB_00504c8b;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  FUN_0046b9e4(param_1,param_2);
  if (((((*(byte *)(param_1 + 0x139) & 8) != 0) || ((*(byte *)(param_1 + 0x139) & 0x40) != 0)) ||
      ((*(byte *)(param_1 + 0x124) & 4) != 0)) || (*param_2 == '\x1b')) goto LAB_00504c6d;
  if ((*param_2 == '\r') && ((char)param_1[0x132] != '\0')) {
    if ((char)param_1[0xb8] == '\0') {
      cVar1 = (char)param_1[0x12a];
      if (cVar1 == '\x01') {
        (**(code **)(*param_1 + 0x1fc))(param_1,DAT_00504c9c);
      }
      else if (cVar1 == '\x02') {
        (**(code **)(*param_1 + 0x1f8))(param_1,DAT_00504c9c,0,0);
      }
      else if (cVar1 == '\x03') {
        FUN_005127dc(param_1,3);
      }
      else if (cVar1 == '\x04') {
        FUN_005128ac(param_1,3);
      }
    }
    else if ((char)param_1[0x134] == '\0') {
      (**(code **)(*param_1 + 0x1c0))();
      if (param_1[0xb5] != 0) {
        FUN_00466238(param_1[0xb5],0);
      }
      (**(code **)(*param_1 + 0x1d4))();
      if (param_1[0xb7] != -1) {
        iVar2 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_1[0xb7]);
        FUN_00404b6c(&local_8,*(undefined4 *)(iVar2 + 0x70));
        FUN_00466238(param_1[0xb5],local_8);
        FUN_0045c148(param_1[0xb5]);
      }
    }
  }
  cVar1 = FUN_0050b340(param_1[0x135],param_1[0x128]);
  if (cVar1 == '\0') goto LAB_00504c6d;
  if ((char)param_1[0xb8] == '\0') {
    uVar3 = (**(code **)(*param_1 + 0x138))();
    cVar1 = FUN_00512d08(param_1,uVar3);
    if (cVar1 == '\0') goto LAB_00504c6d;
  }
  iVar2 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_1[0x128]);
  if (((*(int *)(iVar2 + 0x84) != 0) && ((char)param_1[0x126] == '\0')) &&
     ((char)param_1[0xb8] == '\0')) {
    iVar2 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_1[0x128]);
    if ((*(byte *)(iVar2 + 0x7c) & 0x40) == 0) {
      piVar4 = (int *)(**(code **)(*(int *)param_1[0x135] + 0x30))
                                ((int *)param_1[0x135],param_1[0x128]);
      uVar5 = (**(code **)(*piVar4 + 0x40))();
      if ((uVar5 & 1) == 0) goto LAB_00504b81;
    }
    puVar7 = local_18;
    uVar3 = (**(code **)(*param_1 + 0x138))();
    (**(code **)(*param_1 + 0x1cc))(param_1,param_1[0x128],uVar3,puVar7);
    puVar7 = local_18;
    uVar6 = 1;
    uVar3 = (**(code **)(*param_1 + 0x138))();
    cVar1 = (**(code **)(*param_1 + 0x220))(param_1,param_1[0x128],uVar3,uVar6,puVar7);
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_1[0x128]);
      (**(code **)(**(int **)(iVar2 + 0x84) + 0x10))(*(int **)(iVar2 + 0x84),param_2);
    }
  }
LAB_00504b81:
  if ((*param_2 != '\r') && (*param_2 != '\t')) {
    piVar4 = (int *)(**(code **)(*(int *)param_1[0x135] + 0x30))
                              ((int *)param_1[0x135],param_1[0x128]);
    cVar1 = (**(code **)(*piVar4 + 0x60))(piVar4,*param_2);
    if (cVar1 != '\0') {
      if ((char)param_1[0xb8] == '\0') {
        uVar3 = (**(code **)(*param_1 + 0x138))();
        FUN_0051530c(param_1,param_1[0x128],uVar3);
      }
      else {
        FUN_005155cc(param_1,param_1[0x128],*param_2);
      }
    }
    if (((((char)param_1[0xb8] == '\0') &&
         (iVar2 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_1[0x128])
         , (*(byte *)(iVar2 + 0x7c) & 0x40) == 0)) && (iVar2 = FUN_005044f4(param_1), iVar2 != 0))
       && (iVar2 = (**(code **)(*param_1 + 0x11c))(), 0 < iVar2)) {
      FUN_0043b234(param_1[0x15e],0);
      FUN_0043b234(param_1[0x15e],1);
      FUN_00405108(&local_1c,*param_2);
      uVar6 = 0x504c50;
      FUN_0040526c(param_1 + 0x15d,local_1c);
      uStack_34 = 0;
      FUN_005044f4(param_1);
      uVar3 = FUN_0050a2cc();
      FUN_0050836c(param_1,uVar3,param_1[0x15d],uVar6);
    }
  }
LAB_00504c6d:
  puVar7 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00504c92;
  puStack_30 = (undefined1 *)0x504c82;
  FUN_00404ff0(&local_1c,uStack_34,puVar7);
  puStack_30 = (undefined1 *)0x504c8a;
  FUN_004048d4(&local_8);
  return;
}

