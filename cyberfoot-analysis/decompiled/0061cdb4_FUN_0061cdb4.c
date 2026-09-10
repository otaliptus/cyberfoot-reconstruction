// Address: 0061cdb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0061cdb4(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int local_10;
  int local_c;
  
  iVar3 = *(int *)(PTR_DAT_0066ac78 + 0x88);
  local_c = -1;
  local_10 = -1;
  iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8);
  if (-1 < iVar2) {
    FUN_006494f8(iVar2,param_3,1,&DAT_0061dc28);
  }
  iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8);
  if (-1 < iVar2) {
    FUN_006494f8(iVar2,param_6,1,&DAT_0061dc28);
  }
  if (param_4 < param_5) {
    local_10 = param_6;
    local_c = param_3;
  }
  else if (param_5 < param_4) {
    local_c = param_6;
    local_10 = param_3;
  }
  if ((6 < *(int *)(PTR_DAT_0066ac78 + 0x88)) && (*(int *)(PTR_DAT_0066ac78 + 0x88) < 10)) {
    if (param_4 < param_5) {
      iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8);
      if (-1 < iVar2) {
        FUN_006494f8(iVar2,param_3,5,&DAT_0061dc34);
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8),param_3,1,
                     &DAT_0061dc40);
      }
      iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8);
      if (-1 < iVar2) {
        FUN_006494f8(iVar2,param_6,1);
      }
    }
    else if (param_5 < param_4) {
      iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8);
      if (-1 < iVar2) {
        FUN_006494f8(iVar2,param_6,5,&DAT_0061dc34);
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8),param_6,1,
                     &DAT_0061dc40);
      }
      if (-1 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8)) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8),param_3,1);
      }
    }
    else {
      if (-1 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8)) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8),param_6,2,
                     &DAT_0061dc34);
      }
      if (-1 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8)) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8),param_3,2);
      }
    }
  }
  if (((((((iVar3 == 1) || (iVar3 == 3)) || (iVar3 == 4)) || ((iVar3 == 6 || (6 < iVar3)))) &&
       ((iVar3 != 3 ||
        (0x7fffffff <
         *(uint *)(PTR_DAT_0066b40c +
                  *(int *)PTR_DAT_0066b080 * 4 +
                  *(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x530) * 0x50 +
                  -0x54))))) &&
      (((iVar3 != 4 || (*(int *)(PTR_DAT_0066ac78 + 0x194) < 4)) &&
       ((iVar3 != 6 || (*(int *)(PTR_DAT_0066ac78 + 0x1a0) < 4)))))) &&
     ((iVar3 < 7 || (*(int *)(PTR_DAT_0066ac78 + 0x62c) < 4)))) {
    if (param_5 == param_4) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + param_3 * 0x2f8 + 0xb4 + iVar3 * 4);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + param_3 * 0x2f8 + 0xdc + iVar3 * 4);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + param_6 * 0x2f8 + 0xb4 + iVar3 * 4);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + param_6 * 0x2f8 + 0xdc + iVar3 * 4);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + param_3 * 0x2f8 + 0x154 + iVar3 * 4);
      *piVar1 = *piVar1 + param_5;
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + param_3 * 0x2f8 + 0x17c + iVar3 * 4);
      *piVar1 = *piVar1 + param_4;
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + param_6 * 0x2f8 + 0x154 + iVar3 * 4);
      *piVar1 = *piVar1 + param_4;
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + param_6 * 0x2f8 + 0x17c + iVar3 * 4);
      *piVar1 = *piVar1 + param_5;
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1cc + param_3 * 0x2f8) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1cc + param_6 * 0x2f8) = 0;
    }
    else {
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + local_c * 0x2f8 + 0xb4 + iVar3 * 4);
      *piVar1 = *piVar1 + 3;
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + local_c * 0x2f8 + 0x104 + iVar3 * 4);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + local_c * 0x2f8 + 0xdc + iVar3 * 4);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + local_10 * 0x2f8 + 300 + iVar3 * 4);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + local_10 * 0x2f8 + 0xdc + iVar3 * 4);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + param_3 * 0x2f8 + 0x154 + iVar3 * 4);
      *piVar1 = *piVar1 + param_5;
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + param_3 * 0x2f8 + 0x17c + iVar3 * 4);
      *piVar1 = *piVar1 + param_4;
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + param_6 * 0x2f8 + 0x154 + iVar3 * 4);
      *piVar1 = *piVar1 + param_4;
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + param_6 * 0x2f8 + 0x17c + iVar3 * 4);
      *piVar1 = *piVar1 + param_5;
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1cc + local_c * 0x2f8) = 1;
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1cc + local_10 * 0x2f8) = 2;
    }
  }
  iVar3 = *(int *)(PTR_DAT_0066ac78 + 0x88);
  if (iVar3 == 1) {
    local_c = -1;
    local_10 = -1;
    if (param_4 < param_5) {
      local_10 = param_6;
      local_c = param_3;
    }
    else if (param_5 < param_4) {
      local_c = param_6;
      local_10 = param_3;
    }
    if (param_5 == param_4) {
      if (param_5 == param_4) {
        iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_3 * 0x2f8);
        if (iVar3 == 1) {
          FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8),param_3,3,
                       &DAT_0061dc34);
        }
        else if (iVar3 == 2) {
          FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8),param_3,2,
                       &DAT_0061dc34);
        }
        else if (iVar3 == 3) {
          FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8),param_3,1,
                       &DAT_0061dc34);
        }
        iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_6 * 0x2f8);
        if (iVar3 == 1) {
          FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8),param_6,4)
          ;
        }
        else if (iVar3 == 2) {
          FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8),param_6,3)
          ;
        }
        else if (iVar3 == 3) {
          FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8),param_6,2)
          ;
        }
        else if (iVar3 == 4) {
          FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8),param_6,1)
          ;
        }
      }
    }
    else {
      iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_c * 0x2f8);
      if (iVar3 == 1) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_c * 0x2f8),local_c,5,
                     &DAT_0061dc34);
      }
      else if (iVar3 == 2) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_c * 0x2f8),local_c,4,
                     &DAT_0061dc34);
      }
      else if (iVar3 == 3) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_c * 0x2f8),local_c,3,
                     &DAT_0061dc34);
      }
      else if (iVar3 == 4) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_c * 0x2f8),local_c,2,
                     &DAT_0061dc34);
      }
      puVar5 = &DAT_0061dc40;
      uVar4 = 0x61d36f;
      FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_c * 0x2f8),local_c,1,
                   &DAT_0061dc40);
      FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_10 * 0x2f8),local_10,1,
                   uVar4,puVar5,&DAT_0061dc4c);
    }
  }
  else if (iVar3 == 2) {
    if (param_4 < param_5) {
      iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_6 * 0x2f8);
      if (iVar3 == 1) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8),param_3,5,
                     &DAT_0061dc34);
      }
      else if (iVar3 == 2) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8),param_3,5,
                     &DAT_0061dc34);
      }
      else if (iVar3 == 3) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8),param_3,5,
                     &DAT_0061dc34);
      }
      else if (iVar3 == 4) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8),param_3,5,
                     &DAT_0061dc34);
      }
      puVar5 = &DAT_0061dc40;
      uVar4 = 0x61d59f;
      FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8),param_3,1,
                   &DAT_0061dc40);
      FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8),param_6,1,
                   uVar4,puVar5,&DAT_0061dc4c);
    }
    else if (param_5 < param_4) {
      iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_3 * 0x2f8);
      if (iVar3 == 1) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8),param_6,5,
                     &DAT_0061dc34);
      }
      else if (iVar3 == 2) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8),param_6,5,
                     &DAT_0061dc34);
      }
      else if (iVar3 == 3) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8),param_6,5,
                     &DAT_0061dc34);
      }
      else if (iVar3 == 4) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8),param_6,5,
                     &DAT_0061dc34);
      }
      puVar5 = &DAT_0061dc40;
      uVar4 = 0x61d69a;
      FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8),param_6,1,
                   &DAT_0061dc40);
      FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8),param_3,1,
                   uVar4,puVar5,&DAT_0061dc4c);
    }
    else {
      FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8),param_6,2,
                   &DAT_0061dc34);
      FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8),param_3,2,
                   &DAT_0061dc34);
    }
  }
  else if (iVar3 == 3) {
    if (param_5 == param_4) {
      if (param_5 == param_4) {
        iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x80 + param_3 * 0x2f8);
        if (iVar3 == 1) {
          FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8),param_3,2,
                       &DAT_0061dc34);
        }
        else if (iVar3 == 2) {
          FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8),param_3,1,
                       &DAT_0061dc34);
        }
        iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x80 + param_6 * 0x2f8);
        if (iVar3 == 1) {
          FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8),param_6,2)
          ;
        }
        else if (iVar3 == 2) {
          FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8),param_6,1)
          ;
        }
      }
    }
    else {
      iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x80 + local_c * 0x2f8);
      if (iVar3 == 1) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_c * 0x2f8),local_c,3,
                     &DAT_0061dc34);
      }
      else if (iVar3 == 2) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_c * 0x2f8),local_c,2,
                     &DAT_0061dc34);
      }
      else if (iVar3 - 3U < 2) {
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_c * 0x2f8),local_c,1,
                     &DAT_0061dc34);
      }
      puVar5 = &DAT_0061dc40;
      uVar4 = 0x61d7b6;
      FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_c * 0x2f8),local_c,1,
                   &DAT_0061dc40);
      FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_10 * 0x2f8),local_10,1,
                   uVar4,puVar5,&DAT_0061dc4c);
    }
  }
  else if (iVar3 == 4) {
    if (param_5 == param_4) {
      if (param_5 == param_4) {
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1cc + param_3 * 0x2f8) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1cc + param_6 * 0x2f8) = 0;
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8),param_3,3,
                     &DAT_0061dc34);
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8),param_6,4,
                     &DAT_0061dc34);
      }
    }
    else {
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1cc + local_c * 0x2f8) = 1;
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1cc + local_10 * 0x2f8) = 2;
      FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_c * 0x2f8),local_c,5,
                   &DAT_0061dc34);
      FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_c * 0x2f8),local_c,1,
                   &DAT_0061dc40);
      FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_10 * 0x2f8),local_10,1,
                   &DAT_0061dc4c);
    }
  }
  else if (iVar3 == 6) {
    if (param_5 == param_4) {
      if (param_5 == param_4) {
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1cc + param_3 * 0x2f8) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1cc + param_6 * 0x2f8) = 0;
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_3 * 0x2f8),param_3,3,
                     &DAT_0061dc34);
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_6 * 0x2f8),param_6,2,
                     &DAT_0061dc34);
      }
    }
    else {
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1cc + local_c * 0x2f8) = 1;
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1cc + local_10 * 0x2f8) = 2;
      FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_c * 0x2f8),local_c,4,
                   &DAT_0061dc34);
      FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_c * 0x2f8),local_c,1,
                   &DAT_0061dc40);
      FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_10 * 0x2f8),local_10,1,
                   &DAT_0061dc4c);
    }
  }
  iVar3 = param_4 - param_5;
  if ((3 < iVar3) && (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + param_3 * 0x2f8) != '\0')) {
    FUN_0064cbf0(param_3,4,0,0,0,0);
    if (iVar3 == 4) {
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x238 + param_3 * 0x2f8) = 1;
    }
    else if (iVar3 == 5) {
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x238 + param_3 * 0x2f8) = 2;
    }
    else if (iVar3 == 6) {
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x238 + param_3 * 0x2f8) = 3;
    }
    else {
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x238 + param_3 * 0x2f8) = 4;
    }
  }
  param_5 = param_5 - param_4;
  if ((4 < param_5) && (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + param_6 * 0x2f8) != '\0')) {
    FUN_0064cbf0(param_6,4,0,0,0,0);
    if (param_5 == 5) {
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x238 + param_3 * 0x2f8) = 1;
    }
    else if (param_5 == 6) {
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x238 + param_3 * 0x2f8) = 2;
    }
    else {
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x238 + param_3 * 0x2f8) = 3;
    }
  }
  return;
}

