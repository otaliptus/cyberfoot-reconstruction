// Address: 004bb948
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bb948(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 uVar3;
  int *piVar4;
  int *piVar5;
  int *in_FS_OFFSET;
  bool bVar6;
  byte bVar7;
  int aiStackY_17f8 [1519];
  int *piVar8;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_1c;
  int aiStack_18 [4];
  undefined1 local_5;
  
  bVar7 = 0;
  puStack_2c = &stack0xfffffffc;
  aiStack_18[3] = 0;
  local_5 = (undefined1)param_2;
  puStack_30 = &LAB_004bbb33;
  puStack_34 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_34;
  FUN_00467a98(param_1,param_2,param_3,param_4);
  piVar8 = aiStack_18 + 3;
  FUN_004bb6ac(param_1,param_3,param_4,piVar8,&local_1c);
  bVar6 = aiStack_18[3] == 0;
  if (bVar6) {
    if ((short)param_1[0x1e] == -0x15) {
      FUN_00466414(param_1,0);
      if (*(short *)((int)param_1 + 0x1ba) != 0) {
        (*(code *)param_1[0x6e])(param_1[0x6f],param_1,aiStack_18[3]);
      }
      if ((char)param_1[0x7a] != '\0') {
        if (*(int *)((int)param_1 + 0x1fe) == -1) {
          (**(code **)(*param_1 + 0x7c))();
        }
        else {
          FUN_004bb900(param_1,(int)param_1 + 0x1fe);
        }
      }
      piVar4 = (int *)((int)param_1 + (uint)bVar7 * -8 + 0x202);
      *(int *)((int)param_1 + 0x1fe) = local_1c;
      piVar5 = piVar4 + (uint)bVar7 * -2 + 1;
      *piVar4 = aiStack_18[(uint)bVar7 * -2];
      *piVar5 = aiStack_18[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      piVar5[(uint)bVar7 * -2 + 1] =
           (aiStack_18 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
      if ((char)param_1[0x7a] != '\0') {
        FUN_004bb900(param_1,(int)param_1 + 0x1fe);
      }
    }
    goto LAB_004bbb1d;
  }
  FUN_00404cf0(param_1[100],aiStack_18[3]);
  uVar3 = extraout_var;
  if (bVar6) {
    cVar2 = FUN_00407078((int)param_1 + 0x1fe,&local_1c);
    uVar3 = extraout_var_00;
    if ((cVar2 == '\0') || (param_1[0x7b] == -1)) goto LAB_004bb9c3;
  }
  else {
LAB_004bb9c3:
    if (((char)param_1[0x7a] != '\0') && (local_1c != -1)) {
      FUN_004bb900(param_1,(int)param_1 + 0x1fe);
      uVar3 = extraout_var_01;
    }
  }
  bVar6 = (short)param_1[0x1e] == 0;
  if (bVar6) {
LAB_004bba04:
    if ((char)param_1[0x6a] != '\0') {
      FUN_00488198(*(undefined4 *)PTR_DAT_0066b3ac);
      uVar3 = extraout_var_03;
    }
    FUN_00466414(param_1,CONCAT22(uVar3,0xffeb));
    if (*(short *)((int)param_1 + 0x1b2) != 0) {
      (*(code *)param_1[0x6c])(param_1[0x6d],param_1,aiStack_18[3]);
    }
    if ((char)param_1[0x7a] != '\0') {
      if (local_1c == -1) {
        (**(code **)(*param_1 + 0x7c))();
      }
      else {
        FUN_004bb900(param_1,(int)param_1 + 0x1fe);
      }
    }
  }
  else {
    FUN_00404cf0(param_1[100],aiStack_18[3]);
    uVar3 = extraout_var_02;
    if ((!bVar6) || (param_1[0x7c] != param_1[0x7b])) goto LAB_004bba04;
  }
  FUN_00404928(param_1 + 100,aiStack_18[3]);
  param_1[0x7c] = param_1[0x7b];
  piVar4 = (int *)((int)param_1 + (uint)bVar7 * -8 + 0x202);
  *(int *)((int)param_1 + 0x1fe) = local_1c;
  piVar5 = piVar4 + (uint)bVar7 * -2 + 1;
  *piVar4 = aiStack_18[(uint)bVar7 * -2];
  *piVar5 = aiStack_18[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  piVar5[(uint)bVar7 * -2 + 1] =
       (aiStack_18 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  if ((char)param_1[0x7a] != '\0') {
    FUN_004bb900(param_1,(int)param_1 + 0x1fe);
  }
LAB_004bbb1d:
  puVar1 = puStack_34;
  *in_FS_OFFSET = (int)piVar8;
  puStack_34 = &LAB_004bbb3a;
  FUN_004048d4(aiStack_18 + 3,piVar8,puVar1);
  return;
}

