// Address: 004fe708
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004fe708(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  int iStack_50;
  int local_48;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  iVar1 = *param_3;
  iVar2 = param_3[1];
  iVar3 = param_3[2];
  iVar4 = param_3[3];
  iVar11 = *(int *)(param_2 + 0x60);
  iVar12 = 0;
  if (*(char *)(iVar11 + 0x30) == '\0') {
    if (*(char *)(iVar11 + 0x10) != '\0') {
      if (*(char *)(*(int *)(*(int *)(iVar11 + 0xc) + 0x60) + 0x32) == '\0') {
        iVar12 = FUN_004e301c(param_1[2],*(undefined4 *)(iVar11 + 4));
      }
      else {
        iVar12 = FUN_004e2f70(param_1[2],*(undefined4 *)(iVar11 + 4));
      }
      iVar12 = iVar12 + 2;
    }
  }
  else if ((*(char *)(iVar11 + 0x30) == '\x01') && (*(char *)(iVar11 + 0x10) != '\0')) {
    iVar12 = FUN_004e2efc(param_1[2],*(undefined4 *)(iVar11 + 4));
    iVar12 = iVar12 + 2;
  }
  local_48 = iVar1 + 2;
  cVar5 = (**(code **)(**(int **)(iVar11 + 0x14) + 0x1c))();
  if ((cVar5 == '\0') && (*(char *)(iVar11 + 0x10) != '\x02')) {
    uVar6 = (**(code **)(**(int **)(iVar11 + 0x14) + 0x20))();
    iVar7 = (int)uVar6 >> 1;
    if (iVar7 < 0) {
      iVar7 = iVar7 + (uint)((uVar6 & 1) != 0);
    }
    iVar10 = iVar4 - iVar2 >> 1;
    if (iVar10 < 0) {
      iVar10 = iVar10 + (uint)((iVar4 - iVar2 & 1U) != 0);
    }
    cVar5 = *(char *)(iVar11 + 0x31);
    if (cVar5 == '\0') {
      iStack_50 = iVar1 + 3;
      iVar8 = (**(code **)(**(int **)(iVar11 + 0x14) + 0x2c))();
      local_48 = iVar8 + iStack_50 + 2;
    }
    else if (cVar5 == '\x01') {
      iVar8 = (**(code **)(**(int **)(iVar11 + 0x14) + 0x2c))();
      iVar8 = (iVar3 - iVar8) - iVar12;
      iStack_50 = iVar8 + -2;
      if (*(char *)(*(int *)(iVar11 + 0xc) + 0x99) != '\0') {
        iStack_50 = iVar8 + -0x21;
      }
      iVar8 = (**(code **)(**(int **)(iVar11 + 0x14) + 0x2c))();
      local_48 = iVar8 + iStack_50 + 2;
    }
    else if (cVar5 == '\x02') {
      iVar8 = (**(code **)(**(int **)(iVar11 + 0x14) + 0x2c))();
      iVar9 = iVar8 + iVar12 >> 1;
      if (iVar9 < 0) {
        iVar9 = iVar9 + (uint)((iVar8 + iVar12 & 1U) != 0);
      }
      iVar8 = iVar3 - iVar1 >> 1;
      if (iVar8 < 0) {
        iVar8 = iVar8 + (uint)((iVar3 - iVar1 & 1U) != 0);
      }
      iStack_50 = (iVar8 + iVar1) - iVar9;
      iVar8 = (**(code **)(**(int **)(iVar11 + 0x14) + 0x2c))();
      local_48 = iVar8 + iStack_50 + 2;
    }
    (**(code **)(**(int **)(iVar11 + 0x14) + 0x3c))(*(int **)(iVar11 + 0x14),1);
    FUN_004e6940(param_1[2],iStack_50,(iVar10 + iVar2) - iVar7,*(undefined4 *)(iVar11 + 0x14));
  }
  else {
    cVar5 = *(char *)(iVar11 + 0x31);
    if (cVar5 == '\0') {
      local_48 = iVar1 + 2;
    }
    else if (cVar5 == '\x01') {
      local_48 = (iVar3 - iVar12) + -2;
      if (*(char *)(*(int *)(iVar11 + 0xc) + 0x99) != '\0') {
        local_48 = (iVar3 - iVar12) + -0x21;
      }
    }
    else if ((cVar5 == '\x02') && (iVar12 < iVar3 - iVar1)) {
      local_48 = ((uint)((iVar3 - iVar1) - iVar12) >> 1) + iVar1;
    }
  }
  if (*(char *)(iVar11 + 0x10) != '\0') {
    puVar13 = auStack_30;
    FUN_0041c990(local_48,iVar2,iVar3,puVar13,iVar4);
    uVar14 = 0x4fe910;
    (**(code **)(*param_1 + 0x14))(param_1,auStack_30);
    if (*(char *)(iVar11 + 0x30) == '\0') {
      iVar7 = *(int *)(*(int *)(iVar11 + 0xc) + 0x60);
      FUN_004fdb5c(param_1,param_1[2],auStack_30,puVar13,*(undefined4 *)(iVar11 + 4),
                   CONCAT31((int3)((uint)iVar7 >> 8),*(undefined1 *)(iVar7 + 0x32)));
    }
    else if (*(char *)(iVar11 + 0x30) == '\x01') {
      iVar7 = *(int *)(*(int *)(iVar11 + 0xc) + 0x60);
      FUN_004e6190(param_1[2],auStack_30,*(undefined4 *)(iVar11 + 4),uVar14,
                   CONCAT31((int3)((uint)iVar7 >> 8),*(undefined1 *)(iVar7 + 0x32)));
    }
  }
  if ((char)param_1[3] != '\0') {
    if (*(char *)(param_2 + 0x99) != '\0') {
      iVar11 = iVar4 - iVar2 >> 1;
      if (iVar11 < 0) {
        iVar11 = iVar11 + (uint)((iVar4 - iVar2 & 1U) != 0);
      }
      if (((iVar12 + local_48 + 0x1b < iVar3) ||
          (*(char *)(*(int *)(param_2 + 0x60) + 0x33) == '\0')) &&
         (uVar6 = (**(code **)(*param_1 + 0x10))(), (uVar6 & 4) == 0)) {
        (**(code **)(*param_1 + 0x18))
                  (param_1,iVar12 + local_48 + 0x13,iVar11 + iVar2 + -4,
                   *(char *)(param_2 + 0x9a) == '\0');
      }
    }
    cVar5 = FUN_0050a2ac(param_2);
    if ((cVar5 != '\0') && (uVar6 = (**(code **)(*param_1 + 0x10))(), (uVar6 & 2) != 0)) {
      cVar5 = FUN_0050ab10(param_2);
      if (cVar5 == '\0') {
        FUN_0041c990(iVar1,iVar2,iVar3 + -1,auStack_20,iVar4);
      }
      else {
        FUN_0041c990(iVar1 + -1,iVar2 + -1,iVar3,auStack_20,iVar4);
      }
      iVar1 = param_1[2];
      *(undefined4 *)(iVar1 + 0x20) = 0x550009;
      FUN_0042addc(iVar1,auStack_20,iVar1,auStack_20);
      *(undefined4 *)(param_1[2] + 0x20) = 0xcc0020;
    }
  }
  return;
}

