// Address: 0047e9e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047e9e0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int local_14;
  int local_10;
  
  puVar8 = &stack0xfffffffc;
  puVar9 = &stack0xfffffffc;
  if ((*(char *)(param_1 + 0x1f) == '\0') || (3 < *(ushort *)(param_2 + 4))) {
    switch(*(undefined2 *)(param_2 + 4)) {
    case 0:
      FUN_0047ed50(param_1,*(int *)(param_1 + 0xc) - (uint)*(ushort *)(param_1 + 8));
      break;
    case 1:
      FUN_0047ed50(param_1,*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 8));
      break;
    case 2:
      iVar7 = FUN_0047e8e8(param_1,1,0);
      FUN_0047ed50(param_1,*(int *)(param_1 + 0xc) - iVar7);
      break;
    case 3:
      iVar7 = FUN_0047e8e8(param_1,1,0);
      FUN_0047ed50(param_1,iVar7 + *(int *)(param_1 + 0xc));
      break;
    case 4:
      if (*(int *)(param_1 + 0x14) < 0x8000) {
        FUN_0047ed50(param_1,(int)*(short *)(param_2 + 6));
      }
      else {
        uVar5 = func_0x0047e980();
        FUN_0047ed50(param_1,uVar5,puVar8);
      }
      break;
    case 5:
      if (*(char *)(param_1 + 0x1d) != '\0') {
        if (*(int *)(param_1 + 0x14) < 0x8000) {
          FUN_0047ed50(param_1,(int)*(short *)(param_2 + 6));
        }
        else {
          uVar5 = func_0x0047e980();
          FUN_0047ed50(param_1,uVar5,puVar9);
        }
      }
      break;
    case 6:
      FUN_0047ed50(param_1,0);
      break;
    case 7:
      FUN_0047ed50(param_1,*(undefined4 *)(param_1 + 0x14));
    }
  }
  else {
    if (*(ushort *)(param_2 + 4) < 2) {
      uVar6 = (uint)*(ushort *)(param_1 + 8);
      iVar7 = *(int *)(param_1 + 0x40);
      local_10 = (int)((longlong)(ulonglong)uVar6 / (longlong)iVar7);
      iVar3 = (int)((longlong)(ulonglong)uVar6 / (longlong)iVar7);
      local_14 = (int)((longlong)(ulonglong)uVar6 % (longlong)iVar7);
    }
    else if ((ushort)(*(ushort *)(param_2 + 4) - 2) < 2) {
      iVar7 = *(int *)(param_1 + 0x3c);
      local_14 = (int)(uint)*(ushort *)(param_1 + 10) % iVar7;
      iVar3 = (int)(uint)*(ushort *)(param_1 + 10) / iVar7;
      local_10 = iVar3;
    }
    else {
      iVar7 = 0;
      local_10 = 0;
      iVar3 = 0;
      local_14 = 0;
    }
    iVar2 = 0;
    for (; 0 < iVar7; iVar7 = iVar7 + -1) {
      iVar4 = FUN_0040802c(iVar3);
      if (iVar4 - iVar2 < *(int *)(param_1 + 0x20)) {
        Sleep(*(int *)(param_1 + 0x20) - (iVar4 - iVar2));
      }
      sVar1 = *(short *)(param_2 + 4);
      if (sVar1 == 0) {
        FUN_0047ed50(param_1,*(int *)(param_1 + 0xc) - local_10);
      }
      else if (sVar1 == 1) {
        FUN_0047ed50(param_1,*(int *)(param_1 + 0xc) + local_10);
      }
      else if (sVar1 == 2) {
        FUN_0047ed50(param_1,*(int *)(param_1 + 0xc) - local_10);
      }
      else if (sVar1 == 3) {
        FUN_0047ed50(param_1,*(int *)(param_1 + 0xc) + local_10);
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x88))();
      iVar2 = iVar4;
    }
    if (0 < local_14) {
      sVar1 = *(short *)(param_2 + 4);
      if (sVar1 == 0) {
        FUN_0047ed50(param_1,*(int *)(param_1 + 0xc) - local_14);
      }
      else if (sVar1 == 1) {
        FUN_0047ed50(param_1,*(int *)(param_1 + 0xc) + local_14);
      }
      else if (sVar1 == 2) {
        FUN_0047ed50(param_1,*(int *)(param_1 + 0xc) - local_14);
      }
      else if (sVar1 == 3) {
        FUN_0047ed50(param_1,*(int *)(param_1 + 0xc) + local_14);
      }
    }
  }
  return;
}

