// Address: 004a27bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a27bc(int param_1,undefined4 *param_2)

{
  short *psVar1;
  short *psVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_14;
  
  iVar5 = 0;
  psVar1 = (short *)*param_2;
  iVar6 = *(int *)param_2[2];
  puVar4 = (undefined1 *)(param_1 + 0x1458);
  iVar7 = ((int *)param_2[2])[3];
  local_14 = -1;
  *(undefined4 *)(param_1 + 0x1450) = 0;
  *(undefined4 *)(param_1 + 0x1454) = 0x23d;
  psVar2 = psVar1;
  if (0 < iVar7) {
    do {
      if (*psVar2 == 0) {
        psVar2[1] = 0;
      }
      else {
        *(int *)(param_1 + 0x1450) = *(int *)(param_1 + 0x1450) + 1;
        *(int *)(param_1 + 0xb5c + *(int *)(param_1 + 0x1450) * 4) = iVar5;
        *puVar4 = 0;
        local_14 = iVar5;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
      psVar2 = psVar2 + 2;
    } while (iVar5 < iVar7);
  }
  while (*(int *)(param_1 + 0x1450) < 2) {
    if (local_14 < 2) {
      iVar5 = local_14 + 1;
      local_14 = iVar5;
    }
    else {
      iVar5 = 0;
    }
    *(int *)(param_1 + 0x1450) = *(int *)(param_1 + 0x1450) + 1;
    *(int *)(param_1 + 0xb5c + *(int *)(param_1 + 0x1450) * 4) = iVar5;
    psVar1[iVar5 * 2] = 1;
    *(undefined1 *)(param_1 + 0x1458 + iVar5) = 0;
    *(int *)(param_1 + 0x16a8) = *(int *)(param_1 + 0x16a8) + -1;
    if (iVar6 != 0) {
      *(int *)(param_1 + 0x16ac) =
           *(int *)(param_1 + 0x16ac) - (uint)*(ushort *)(iVar6 + 2 + iVar5 * 4);
    }
  }
  param_2[1] = local_14;
  iVar6 = (int)*(uint *)(param_1 + 0x1450) >> 1;
  if (iVar6 < 0) {
    iVar6 = iVar6 + (uint)((*(uint *)(param_1 + 0x1450) & 1) != 0);
  }
  for (; 0 < iVar6; iVar6 = iVar6 + -1) {
    FUN_004a2458(param_1,psVar1,iVar6);
  }
  do {
    iVar6 = *(int *)(param_1 + 0x1450);
    iVar5 = *(int *)(param_1 + 0xb60);
    *(int *)(param_1 + 0x1450) = *(int *)(param_1 + 0x1450) + -1;
    *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_1 + 0xb5c + iVar6 * 4);
    FUN_004a2458(param_1,psVar1,1);
    iVar6 = *(int *)(param_1 + 0xb60);
    *(int *)(param_1 + 0x1454) = *(int *)(param_1 + 0x1454) + -1;
    *(int *)(param_1 + 0xb5c + *(int *)(param_1 + 0x1454) * 4) = iVar5;
    *(int *)(param_1 + 0x1454) = *(int *)(param_1 + 0x1454) + -1;
    *(int *)(param_1 + 0xb5c + *(int *)(param_1 + 0x1454) * 4) = iVar6;
    psVar1[iVar7 * 2] = psVar1[iVar6 * 2] + psVar1[iVar5 * 2];
    if (*(byte *)(param_1 + 0x1458 + iVar5) < *(byte *)(param_1 + 0x1458 + iVar6)) {
      cVar3 = *(char *)(param_1 + 0x1458 + iVar6);
    }
    else {
      cVar3 = *(char *)(param_1 + 0x1458 + iVar5);
    }
    *(char *)(param_1 + 0x1458 + iVar7) = cVar3 + '\x01';
    psVar1[iVar6 * 2 + 1] = (short)iVar7;
    psVar1[iVar5 * 2 + 1] = (short)iVar7;
    *(int *)(param_1 + 0xb60) = iVar7;
    iVar7 = iVar7 + 1;
    FUN_004a2458(param_1,psVar1,1);
  } while (1 < *(int *)(param_1 + 0x1450));
  *(int *)(param_1 + 0x1454) = *(int *)(param_1 + 0x1454) + -1;
  *(undefined4 *)(param_1 + 0xb5c + *(int *)(param_1 + 0x1454) * 4) =
       *(undefined4 *)(param_1 + 0xb60);
  FUN_004a254c(param_1,param_2);
  FUN_004a274c(psVar1,local_14,param_1 + 0xb3c);
  return;
}

