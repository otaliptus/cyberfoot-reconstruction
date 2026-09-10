// Address: 005f9388
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm67_bt3Click(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  
  puStack_20 = &LAB_005f93ac;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  *in_FS_OFFSET = uStack_24;
  DAT_006d3f3c = 0xffffffff;
  uStack_1c = 0x5f93c5;
  FUN_00656a18(0,uStack_24,&stack0xfffffffc);
  DAT_006d3f3c = *(int *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -8);
  if (999 < DAT_006d3f3c) {
    if (DAT_006d3f3c == 0x3e9) {
      uStack_1c = 0x5f9406;
      iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
      if (-1 < iVar2) {
        iVar2 = iVar2 + 1;
        iVar4 = 0;
        do {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar4 * 0x130) = 100;
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    uStack_1c = 0x5f942b;
    FUN_00656a18();
    DAT_006d3f3c = *(int *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -8);
  }
  uStack_1c = *(undefined4 *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0xc);
  puStack_20 = *(undefined1 **)
                (PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10);
  uStack_24 = 0x5f9469;
  FUN_0064fdf0();
  iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x88);
  if (iVar2 == 4) {
    uStack_1c = 0x5f9498;
    FUN_005f3890(param_1,4);
  }
  else if (iVar2 == 6) {
    uStack_1c = 0x5f94a7;
    FUN_005f3890(param_1,6);
  }
  else if (iVar2 - 8U < 2) {
    uStack_1c = 0x5f94b3;
    FUN_005f343c(param_1,iVar2);
  }
  if ((DAT_006d3f3c == 5) && (*(int *)(PTR_DAT_0066ac78 + 0x1a8) == 1)) {
    uStack_1c = 0x5f94cf;
    cVar1 = FUN_00634498();
    if (cVar1 == '\0') {
      DAT_006d3f3c = -1;
    }
  }
  uStack_1c = 0x5f94e5;
  FUN_005f92d8(param_1);
  *(int *)(PTR_DAT_0066ac78 + 0x88) = DAT_006d3f3c;
  if (*PTR_DAT_0066acd0 != '\0') {
    uStack_1c = 0x5f9508;
    FUN_005f9e54(param_1);
  }
  uStack_1c = 0x5f9510;
  FUN_005f925c(param_1);
  uStack_1c = 0x5f9515;
  FUN_0064cae0();
  if (*(int *)(PTR_DAT_0066ac78 + 0x700) == 0) {
    if (((DAT_006d3f3c == 7) || (DAT_006d3f3c == 8)) || (DAT_006d3f3c == 9)) {
      uStack_1c = 0x5f954a;
      FUN_005f3380(param_1);
      uStack_1c = 0x5f9556;
      iVar4 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
      if (-1 < iVar4) {
        iVar4 = iVar4 + 1;
        iVar5 = 0;
        do {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar5 * 0x130) = 100;
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else if ((*(int *)(PTR_DAT_0066ac78 + 0x700) == 0) &&
            (((DAT_006d3f3c == 7 || (DAT_006d3f3c == 8)) || (DAT_006d3f3c == 9)))) {
      uStack_1c = 0x5f95b1;
      iVar4 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
      if (-1 < iVar4) {
        iVar4 = iVar4 + 1;
        iVar5 = 0;
        do {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar5 * 0x130) = 100;
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      *(undefined4 *)(PTR_DAT_0066ac78 + 0x700) = 1;
    }
  }
  if (((*(int *)(PTR_DAT_0066ac78 + 0x704) == 0) && (*(int *)(PTR_DAT_0066ac78 + 0x4c) == 1)) &&
     (*(int *)(PTR_DAT_0066ac78 + 0x50) == 2)) {
    uStack_1c = 0x5f9610;
    iVar4 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
    if (0 < iVar4) {
      iVar5 = 1;
      do {
        if (-1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar5 * 0x130)) {
          uStack_1c = 0x5f9634;
          iVar3 = FUN_00652134(iVar5);
          *(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + iVar5 * 0x130) =
               (longlong)ROUND((float)iVar3 * _DAT_005f96d8);
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(undefined4 *)(PTR_DAT_0066ac78 + 0x704) = 1;
  }
  if (DAT_006d3f3c == -1) {
    uStack_1c = 0x5f9674;
    FUN_005f96dc(param_1);
  }
  else {
    switch(iVar2) {
    case 0:
    case 7:
    case 8:
    case 9:
      uStack_1c = 0x5f96ce;
      FUN_005f9f14(param_1);
      break;
    case 1:
      uStack_1c = 0x5f96b0;
      FUN_005fa020(param_1);
      break;
    case 2:
    case 4:
    case 5:
    case 6:
    case 10:
      uStack_1c = 0x5f96ba;
      FUN_005f9efc(param_1);
      break;
    case 3:
      uStack_1c = 0x5f96c4;
      FUN_005f9dc8(param_1);
    }
  }
  return;
}

