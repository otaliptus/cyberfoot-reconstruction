// Address: 004a77f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a77f8(int param_1,undefined4 *param_2,undefined4 param_3,uint *param_4,uint *param_5,
                 undefined4 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [4];
  undefined4 local_c;
  int local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  puStack_38 = &LAB_004a7a40;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  param_2[3] = param_3;
  param_2[4] = param_6;
  local_c = param_3;
  local_8 = param_1;
  do {
    if ((int)param_2[4] < 1) goto LAB_004a7a25;
    uVar2 = FUN_004208d4(param_2[0xf]);
    if ((((int)*param_5 >> 0x1f == extraout_EDX && *param_5 == uVar2) && (0 < (int)param_2[4])) &&
       (param_2[1] == 0)) {
      (**(code **)(*(int *)param_2[0xf] + 0xc))((int *)param_2[0xf],&local_14,4);
      uVar2 = FUN_004a5d08(local_14);
      uVar6 = uVar2 == (*param_4 ^ 0xffffffff);
      if (!(bool)uVar6) {
        FUN_00406d44(PTR_PTR_0066b58c,&local_18);
        FUN_004aa278(*(undefined4 *)(local_8 + 0xc),PTR_DAT_004a4db4,local_18);
        goto LAB_004a7a25;
      }
      (**(code **)(*(int *)param_2[0xf] + 0xc))((int *)param_2[0xf],param_5,4);
      (**(code **)(*(int *)param_2[0xf] + 0xc))((int *)param_2[0xf],local_10,4);
      FUN_00404b54(&local_1c,local_10,4);
      FUN_00404cf0(local_1c,&LAB_004a7a5c);
      if (!(bool)uVar6) {
        FUN_00406d44(PTR_PTR_0066b34c,&local_20);
        FUN_004aa278(*(undefined4 *)(local_8 + 0xc),PTR_DAT_004a4e6c,local_20);
        goto LAB_004a7a25;
      }
      uVar2 = FUN_004a5c5c(0xffffffff,local_10,4);
      *param_4 = uVar2;
      iVar3 = FUN_004208d4(param_2[0xf]);
      iVar4 = FUN_004a5d08(*param_5);
      *param_5 = iVar3 + iVar4;
    }
    if (param_2[1] == 0) {
      uVar2 = FUN_004208d4(param_2[0xf]);
      iVar3 = extraout_EDX_00 + (uint)(0xffff0000 < uVar2);
      iVar4 = (int)*param_5 >> 0x1f;
      if (iVar4 == iVar3) {
        if (*param_5 < uVar2 + 0xffff) goto LAB_004a797b;
LAB_004a7997:
        uVar5 = (**(code **)(*(int *)param_2[0xf] + 0xc))((int *)param_2[0xf],param_2[0xe],0xffff);
        param_2[1] = uVar5;
      }
      else {
        if (iVar3 <= iVar4) goto LAB_004a7997;
LAB_004a797b:
        iVar3 = FUN_004208d4(param_2[0xf],uVar2 + 0xffff);
        uVar5 = (**(code **)(*(int *)param_2[0xf] + 0xc))
                          ((int *)param_2[0xf],param_2[0xe],*param_5 - iVar3);
        param_2[1] = uVar5;
      }
      uVar2 = FUN_004a5c5c(*param_4,param_2[0xe],param_2[1]);
      *param_4 = uVar2;
      if (param_2[1] == 0) goto LAB_004a7a25;
      *param_2 = param_2[0xe];
    }
    iVar3 = FUN_004a06a0(param_2,0);
  } while (-1 < iVar3);
  FUN_00406d44(PTR_PTR_0066b520,&local_24);
  FUN_00404bac(&local_24,(&PTR_DAT_0066935c)[iVar3]);
  FUN_004aa278(*(undefined4 *)(local_8 + 0xc),PTR_DAT_004a4ed0,local_24);
LAB_004a7a25:
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_004a7a47;
  puStack_38 = (undefined1 *)0x4a7a3f;
  FUN_004048f8(&local_24,4,puVar1);
  return;
}

