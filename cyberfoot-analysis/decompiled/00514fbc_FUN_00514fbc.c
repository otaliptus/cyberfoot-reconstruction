// Address: 00514fbc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00514fbc(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  byte bVar11;
  int aiStackY_1818 [1521];
  undefined1 auStack_40 [4];
  int local_3c;
  int aiStack_38 [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 uStack_14;
  
  bVar11 = 0;
  FUN_0046e900(param_1);
  if ((char)param_1[0xaf] == '\0') {
    uVar6 = FUN_00465c50(param_1);
    piVar10 = &local_3c;
    FUN_0050f004(param_1,aiStack_38 + 3);
    iVar8 = FUN_0050f330(param_1);
    uVar7 = FUN_00465c0c(param_1);
    FUN_0040709c(aiStack_38[3] + iVar8,0,uVar7,piVar10,uVar6);
    piVar10 = param_1 + (uint)bVar11 * -2 + 0x85;
    param_1[0x84] = local_3c;
    *piVar10 = aiStack_38[(uint)bVar11 * -2];
    piVar10[(uint)bVar11 * -2 + 1] = aiStack_38[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    (piVar10 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
         (aiStack_38 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
    FUN_0050f004(param_1,aiStack_38 + 3);
    piVar10 = &local_3c;
    uVar6 = local_20;
    FUN_0050f004(param_1,local_1c);
    uVar7 = FUN_00465c0c(param_1);
    FUN_0040709c(0,local_18,uVar7,piVar10,uVar6);
    piVar10 = (int *)((int)param_1 + (uint)bVar11 * -8 + 0x225);
    *(int *)((int)param_1 + 0x221) = local_3c;
    piVar9 = piVar10 + (uint)bVar11 * -2 + 1;
    *piVar10 = aiStack_38[(uint)bVar11 * -2];
    *piVar9 = aiStack_38[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    piVar9[(uint)bVar11 * -2 + 1] =
         (aiStack_38 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
    (**(code **)(*param_1 + 0x174))();
    iVar8 = param_1[0x82];
    iVar3 = FUN_0050ae54(param_1[0x135]);
    iVar1 = *(int *)(param_1[0x8e] + 0x2c);
    iVar4 = FUN_00465c0c(param_1);
    if (iVar3 - iVar1 < iVar4) {
      FUN_0042ab6c(*(undefined4 *)(iVar8 + 0x14),param_1[0x1c]);
      cVar2 = FUN_004e4b0c();
      if ((cVar2 == '\0') || ((char)param_1[0xb1] != '\0')) {
        uVar6 = FUN_00465c50(param_1);
        piVar10 = &local_3c;
        FUN_0050f004(param_1,aiStack_38 + 3);
        uVar7 = FUN_00465c0c(param_1);
        FUN_0040709c(uStack_24,0,uVar7,piVar10,uVar6);
        FUN_0042af8c(iVar8,&local_3c);
      }
      else {
        FUN_0050f410(param_1,aiStack_38 + 3);
        piVar10 = &local_3c;
        uVar7 = local_20;
        FUN_0050f004(param_1,local_1c);
        uVar6 = uStack_14;
        uVar5 = FUN_00465c0c(param_1);
        FUN_0040709c(uVar6,0,uVar5,piVar10,uVar7);
        (**(code **)(*(int *)param_1[0x9e] + 0x48))((int *)param_1[0x9e],&local_3c);
        uVar7 = FUN_00465c50(param_1);
        piVar10 = &local_3c;
        FUN_0050f4d0(param_1,aiStack_38 + 3);
        FUN_0050f004(param_1,local_1c);
        uVar6 = uStack_14;
        uVar5 = FUN_00465c0c(param_1);
        FUN_0040709c(uVar6,uStack_28,uVar5,piVar10,uVar7);
        FUN_0042af8c(iVar8,&local_3c);
        uVar6 = FUN_00465c50(param_1);
        piVar10 = &local_3c;
        FUN_0050f004(param_1,aiStack_38 + 3);
        FUN_0050f004(param_1,local_1c);
        uVar7 = FUN_00465c0c(param_1);
        FUN_0040709c(uStack_14,local_20,uVar7,piVar10,uVar6);
        FUN_0042af8c(iVar8,&local_3c);
      }
    }
  }
  else if ((char)param_1[0xaf] == '\x01') {
    if ((((*(byte *)(param_1 + 0x124) & 0x40) != 0) && (cVar2 = FUN_004e4b0c(), cVar2 != '\0')) &&
       ((char)param_1[0xb1] == '\0')) {
      FUN_0050f410(param_1,aiStack_38 + 3);
      piVar10 = &local_3c;
      uVar6 = FUN_00465c0c(param_1);
      uVar7 = FUN_0050ae54(param_1[0x135]);
      FUN_0040709c(uVar7,0,uVar6,piVar10,local_20);
      (**(code **)(*(int *)param_1[0x9e] + 0x48))((int *)param_1[0x9e],&local_3c);
    }
    (**(code **)(*param_1 + 0x44))(param_1,&local_3c);
    piVar10 = param_1 + (uint)bVar11 * -2 + 0x85;
    param_1[0x84] = local_3c;
    *piVar10 = aiStack_38[(uint)bVar11 * -2];
    piVar10[(uint)bVar11 * -2 + 1] = aiStack_38[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    (piVar10 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
         (aiStack_38 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
    uVar6 = FUN_00465c50(param_1);
    piVar10 = &local_3c;
    FUN_0050f004(param_1,aiStack_38 + 3);
    uVar7 = FUN_00465c0c(param_1);
    FUN_0040709c(0,uStack_28,uVar7,piVar10,uVar6);
    piVar10 = (int *)((int)param_1 + (uint)bVar11 * -8 + 0x225);
    *(int *)((int)param_1 + 0x221) = local_3c;
    piVar9 = piVar10 + (uint)bVar11 * -2 + 1;
    *piVar10 = aiStack_38[(uint)bVar11 * -2];
    *piVar9 = aiStack_38[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    piVar9[(uint)bVar11 * -2 + 1] =
         (aiStack_38 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
    (**(code **)(*param_1 + 0x180))();
  }
  iVar8 = (**(code **)(*param_1 + 0x144))();
  if (iVar8 == 0) {
    (**(code **)(**(int **)(param_1[0x82] + 0xc) + 8))(*(int **)(param_1[0x82] + 0xc),param_1[0x1a])
    ;
    cVar2 = (**(code **)(*param_1 + 0x50))();
    if (cVar2 == '\0') {
      FUN_0042a3a0(*(undefined4 *)(param_1[0x82] + 0xc),0xff000011);
    }
    FUN_00510c64(param_1,auStack_40);
    FUN_004e5798(PTR_DAT_004e5160,param_1[0x82],auStack_40,0,param_1[0x9d],2);
  }
  FUN_00403c80(param_1);
  return;
}

