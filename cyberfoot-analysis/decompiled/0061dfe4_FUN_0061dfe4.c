// Address: 0061dfe4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0061dfe4(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int unaff_EDI;
  int local_9c;
  int local_98;
  int local_94 [33];
  
  puVar1 = PTR_DAT_0066ac78;
  local_98 = 0;
  iVar2 = 0x10;
  piVar5 = local_94;
  do {
    piVar5 = piVar5 + 1;
    *piVar5 = -1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 2) {
    local_9c = *(int *)(PTR_DAT_0066ac78 + 0x110);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 4) {
    local_9c = *(int *)(PTR_DAT_0066ac78 + 0x194);
  }
  if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 6) && (*(int *)PTR_DAT_0066b484 == 2)) {
    local_9c = *(int *)(PTR_DAT_0066ac78 + 0x1a0);
  }
  else if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 6) && (*(int *)PTR_DAT_0066b484 == 1)) {
    local_9c = DAT_006d4920;
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 2) {
    switch(local_9c) {
    case 0:
      unaff_EDI = 0x3f;
      break;
    case 1:
      unaff_EDI = 0x1f;
      break;
    case 2:
      unaff_EDI = 0xf;
      break;
    case 3:
      unaff_EDI = 7;
      break;
    case 4:
      unaff_EDI = 3;
      break;
    case 5:
      unaff_EDI = 1;
    }
  }
  iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x88);
  if ((iVar2 == 4) || (iVar2 == 6)) {
    switch(local_9c) {
    case 1:
    case 2:
    case 3:
      unaff_EDI = 0x1f;
      break;
    case 4:
      unaff_EDI = 0xf;
      break;
    case 5:
      unaff_EDI = 7;
      break;
    case 6:
      unaff_EDI = 3;
      break;
    case 7:
      unaff_EDI = 1;
    }
  }
  iVar6 = 1;
  iVar2 = FUN_0065a250(*(undefined4 *)PTR_DAT_0066b484,iVar2,local_9c);
  if (0 < unaff_EDI) {
    do {
      if ((-1 < *(int *)(*(int *)PTR_DAT_0066afa0 + iVar2 * 0x48)) &&
         (-1 < *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar2 * 0x48))) {
        local_94[0] = iVar2;
        iVar3 = FUN_0061edd0(param_1,*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 8 + iVar2 * 0x48),
                             *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0xc + iVar2 * 0x48),
                             *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar2 * 0x48),
                             *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar2 * 0x48),
                             *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x50 + iVar2 * 0x48),
                             *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x54 + iVar2 * 0x48));
        if ((iVar3 < 3) && (0 < iVar3)) {
          local_94[iVar6] = *(int *)(*(int *)PTR_DAT_0066afa0 + iVar2 * 0x48 + -4 + iVar3 * 4);
          if (iVar3 == 1) {
            uVar4 = *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar2 * 0x48);
          }
          else {
            uVar4 = *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar2 * 0x48);
          }
        }
        else {
          iVar3 = FUN_0061eb40(param_1,iVar2 + 1);
          local_94[iVar6] = *(int *)(*(int *)PTR_DAT_0066afa0 + iVar2 * 0x48 + 0x44 + iVar3 * 4);
          if (iVar3 == 1) {
            uVar4 = *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x4c + iVar2 * 0x48);
          }
          else {
            uVar4 = *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x48 + iVar2 * 0x48);
          }
        }
        FUN_00622ec8(param_1,*(undefined4 *)(puVar1 + 0x88),local_9c,uVar4,local_94[iVar6]);
        FUN_0061dec8(iVar2,local_94[iVar6]);
        iVar2 = iVar2 + 2;
        iVar6 = iVar6 + 1;
      }
      unaff_EDI = unaff_EDI + -1;
    } while (unaff_EDI != 0);
  }
  FUN_00405eec(*(undefined4 *)PTR_DAT_0066afa0);
  iVar2 = *(int *)(puVar1 + 0x88);
  if (iVar2 == 2) {
    local_98 = *(int *)(puVar1 + 0x110) + 1;
  }
  if (iVar2 == 4) {
    local_98 = *(int *)(puVar1 + 0x194) + 1;
  }
  if (iVar2 == 6) {
    local_98 = *(int *)(puVar1 + 0x1a0) + 1;
  }
  if (((*(int *)(puVar1 + 0x88) == 6) && (*(int *)PTR_DAT_0066b484 == 1)) &&
     (local_98 = DAT_006d4920 + 1, local_98 < 4)) {
    local_98 = 4;
  }
  if ((*(int *)(puVar1 + 0x88) == 2) && (local_98 == 6)) {
    *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x214 + local_94[1] * 0x2f8) = 0;
    FUN_00623ee0(param_1,local_94[1],local_94[0]);
    FUN_006490a8(local_94[1],6,*(undefined4 *)(puVar1 + 0x88),6);
  }
  else {
    iVar2 = *(int *)(puVar1 + 0x88);
    if (((iVar2 == 4) || (iVar2 == 6)) && (local_98 == 8)) {
      if (iVar2 == 4) {
        *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x217 + local_94[1] * 0x2f8) = 0;
      }
      else {
        *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x218 + local_94[1] * 0x2f8) = 0;
      }
      FUN_006490a8(local_94[1],8,*(undefined4 *)(puVar1 + 0x88),8);
      FUN_00623ee0(param_1,local_94[1],local_94[0]);
    }
    else {
      if (*(int *)(puVar1 + 0x88) == 2) {
        switch(local_98) {
        case 1:
          local_9c = 0x10;
          break;
        case 2:
          local_9c = 8;
          break;
        case 3:
          local_9c = 4;
          break;
        case 4:
          local_9c = 2;
          break;
        case 5:
          local_9c = 1;
        }
      }
      iVar2 = *(int *)(puVar1 + 0x88);
      if ((iVar2 == 4) || (iVar2 == 6)) {
        if (local_98 == 4) {
          local_9c = 8;
        }
        else if (local_98 == 5) {
          local_9c = 4;
        }
        else if (local_98 == 6) {
          local_9c = 2;
        }
        else if (local_98 == 7) {
          local_9c = 1;
        }
      }
      iVar2 = FUN_0065a250(*(undefined4 *)PTR_DAT_0066b484,iVar2,local_98);
      iVar6 = 1;
      if (0 < local_9c) {
        do {
          *(int *)(*(int *)PTR_DAT_0066afa0 + iVar2 * 0x48) = local_94[iVar6];
          *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar2 * 0x48) = local_94[iVar6 + 1];
          *(int *)(*(int *)PTR_DAT_0066afa0 + (iVar2 + 1) * 0x48) = local_94[iVar6 + 1];
          *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar2 + 1) * 0x48) = local_94[iVar6];
          iVar2 = iVar2 + 2;
          iVar6 = iVar6 + 2;
          local_9c = local_9c + -1;
        } while (local_9c != 0);
      }
    }
  }
  return;
}

