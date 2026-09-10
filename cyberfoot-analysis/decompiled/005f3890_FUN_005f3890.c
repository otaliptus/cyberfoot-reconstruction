// Address: 005f3890
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f3890(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_EBP;
  int unaff_ESI;
  int iVar3;
  int local_40;
  uint local_3c;
  int iStack_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_24;
  uint local_20;
  int local_1c;
  int *piVar5;
  int iVar4;
  
  if (param_2 == 4) {
    local_34 = *(int *)(PTR_DAT_0066ac78 + 0x194);
  }
  else if (param_2 == 6) {
    local_34 = *(int *)(PTR_DAT_0066ac78 + 0x1a0);
  }
  if (param_2 == 4) {
    local_30 = *(int *)(PTR_DAT_0066ac78 + 0x198);
  }
  else if (param_2 == 6) {
    local_30 = *(int *)(PTR_DAT_0066ac78 + 0x1a4);
  }
  local_24 = 0;
  local_20 = 0;
  if ((local_34 < 5) && (local_30 < 2)) {
    if (param_2 == 4) {
      local_24 = 1;
      local_20 = 4;
    }
    else if (param_2 == 6) {
      local_24 = 2;
      local_20 = 2;
    }
    if (local_24 <= local_20) {
      local_1c = (local_20 - local_24) + 1;
      local_3c = local_24;
      do {
        local_40 = 0x10;
        puVar1 = &DAT_006d3f48;
        do {
          *puVar1 = 0xffffffff;
          puVar1 = puVar1 + 1;
          local_40 = local_40 + -1;
        } while (local_40 != 0);
        local_2c = 0;
        do {
          iStack_38 = 4;
          iVar3 = 0;
          piVar5 = unaff_EBP;
          do {
            iVar4 = iVar3;
            iVar3 = iVar4 + 1;
            FUN_004060a8(&DAT_006d3f88,PTR_DAT_005f2a80,1,iVar3);
            if (param_2 == 4) {
              if (local_34 == 1) {
                unaff_ESI = *piVar5;
              }
              else if (local_34 == 2) {
                unaff_ESI = piVar5[0x20];
              }
              else if (local_34 == 3) {
                unaff_ESI = piVar5[0x80];
              }
              else if (local_34 == 4) {
                unaff_ESI = piVar5[0xa0];
              }
            }
            else if (param_2 == 6) {
              if (local_34 == 1) {
                unaff_ESI = piVar5[0x40];
              }
              else {
                unaff_ESI = piVar5[0x60];
              }
            }
            DAT_006d3f88[iVar3 * 10 + -10] = unaff_ESI;
            DAT_006d3f88[iVar3 * 10 + -9] =
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + unaff_ESI * 0x2f8 + 0xb4 + param_2 * 4);
            DAT_006d3f88[iVar3 * 10 + -8] =
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + unaff_ESI * 0x2f8 + 0xdc + param_2 * 4);
            DAT_006d3f88[iVar3 * 10 + -7] =
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + unaff_ESI * 0x2f8 + 0x104 + param_2 * 4)
            ;
            DAT_006d3f88[iVar3 * 10 + -6] =
                 *(int *)(*(int *)PTR_DAT_0066af70 + unaff_ESI * 0x2f8 + 0xdc + param_2 * 4) -
                 (*(int *)(*(int *)PTR_DAT_0066af70 + unaff_ESI * 0x2f8 + 0x104 + param_2 * 4) +
                 *(int *)(*(int *)PTR_DAT_0066af70 + unaff_ESI * 0x2f8 + 300 + param_2 * 4));
            DAT_006d3f88[iVar3 * 10 + -5] =
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + unaff_ESI * 0x2f8 + 300 + param_2 * 4);
            DAT_006d3f88[iVar3 * 10 + -4] =
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + unaff_ESI * 0x2f8 + 0x154 + param_2 * 4)
            ;
            DAT_006d3f88[iVar3 * 10 + -3] =
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + unaff_ESI * 0x2f8 + 0x17c + param_2 * 4)
            ;
            DAT_006d3f88[iVar3 * 10 + -2] =
                 *(int *)(*(int *)PTR_DAT_0066af70 + unaff_ESI * 0x2f8 + 0x154 + param_2 * 4) -
                 *(int *)(*(int *)PTR_DAT_0066af70 + unaff_ESI * 0x2f8 + 0x17c + param_2 * 4);
            piVar5 = piVar5 + 1;
            iStack_38 = iStack_38 + -1;
          } while (iStack_38 != 0);
          DAT_006d3f44 = FUN_00405eec(DAT_006d3f88);
          iVar2 = DAT_006d3f44 + -1;
          FUN_004bcdb0(DAT_006d3f88,0x28,0,&LAB_005f2b00);
          if (-1 < iVar4) {
            local_40 = 0;
            do {
              *(int *)(*(int *)PTR_DAT_0066af70 + DAT_006d3f88[local_40 * 10] * 0x2f8 + 0x1a4 +
                      param_2 * 4) = local_40 + 1;
              local_40 = local_40 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          if (local_34 == 4) {
            (&DAT_006d3f44)[local_2c + 1] = *DAT_006d3f88;
            local_2c = local_2c + 2;
            (&DAT_006d3f44)[local_2c] = DAT_006d3f88[10];
            if (param_2 == 4) {
              *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x217 + DAT_006d3f88[0x14] * 0x2f8) = 0;
              *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x217 + DAT_006d3f88[0x1e] * 0x2f8) = 0;
            }
            else if (param_2 == 6) {
              *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x218 + DAT_006d3f88[0x14] * 0x2f8) = 0;
              *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x218 + DAT_006d3f88[0x1e] * 0x2f8) = 0;
            }
            if ((int)DAT_006d3f88[0x14] <= *(int *)(PTR_DAT_0066ac78 + 0x3c) + -1) {
              FUN_006490a8(DAT_006d3f88[0x14],3,param_2,local_3c);
            }
            if ((int)DAT_006d3f88[0x1e] <= *(int *)(PTR_DAT_0066ac78 + 0x3c) + -1) {
              FUN_006490a8(DAT_006d3f88[0x1e],3,param_2,local_3c);
            }
          }
        } while (iVar2 != 1);
        if (local_34 == 4) {
          FUN_004060a8(&DAT_006d3f88,PTR_DAT_005f2a80,1,0);
          FUN_00405eec(*(undefined4 *)PTR_DAT_0066afa0);
          iVar3 = FUN_0065a250(local_3c,param_2,4);
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar3 * 0x48) = DAT_006d3f6c;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar3 * 0x48) = DAT_006d3f48;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + (iVar3 + 1) * 0x48) = DAT_006d3f48;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar3 + 1) * 0x48) = DAT_006d3f6c;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + (iVar3 + 2) * 0x48) = DAT_006d3f4c;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar3 + 2) * 0x48) = DAT_006d3f68;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + (iVar3 + 3) * 0x48) = DAT_006d3f68;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar3 + 3) * 0x48) = DAT_006d3f4c;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + (iVar3 + 4) * 0x48) = DAT_006d3f74;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar3 + 4) * 0x48) = DAT_006d3f50;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + (iVar3 + 5) * 0x48) = DAT_006d3f50;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar3 + 5) * 0x48) = DAT_006d3f74;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + (iVar3 + 6) * 0x48) = DAT_006d3f54;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar3 + 6) * 0x48) = DAT_006d3f70;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + (iVar3 + 7) * 0x48) = DAT_006d3f70;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar3 + 7) * 0x48) = DAT_006d3f54;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + (iVar3 + 8) * 0x48) = DAT_006d3f7c;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar3 + 8) * 0x48) = DAT_006d3f58;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + (iVar3 + 9) * 0x48) = DAT_006d3f58;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar3 + 9) * 0x48) = DAT_006d3f7c;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + (iVar3 + 10) * 0x48) = DAT_006d3f5c;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar3 + 10) * 0x48) = DAT_006d3f78;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + (iVar3 + 0xb) * 0x48) = DAT_006d3f78;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar3 + 0xb) * 0x48) = DAT_006d3f5c;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + (iVar3 + 0xc) * 0x48) = DAT_006d3f84;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar3 + 0xc) * 0x48) = DAT_006d3f60;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + (iVar3 + 0xd) * 0x48) = DAT_006d3f60;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar3 + 0xd) * 0x48) = DAT_006d3f84;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + (iVar3 + 0xe) * 0x48) = DAT_006d3f64;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar3 + 0xe) * 0x48) = DAT_006d3f80;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + (iVar3 + 0xf) * 0x48) = DAT_006d3f80;
          *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar3 + 0xf) * 0x48) = DAT_006d3f64;
        }
        local_3c = local_3c + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
    local_1c = FUN_00405eec(*(undefined4 *)PTR_DAT_0066afa0);
    if (-1 < local_1c + -1) {
      local_40 = 0;
      do {
        if ((param_2 == *(int *)(*(int *)PTR_DAT_0066afa0 + 0x18 + local_40 * 0x48)) &&
           (*(double *)(*(int *)PTR_DAT_0066afa0 + 0x30 + local_40 * 0x48) ==
            *(double *)(PTR_DAT_0066b574 + *(int *)PTR_DAT_0066adac * 0x18 + -0x10))) {
          FUN_00646a38(param_2,*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + local_40 * 0x48),
                       *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + local_40 * 0x48),0,
                       *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0xc + local_40 * 0x48),
                       *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 8 + local_40 * 0x48));
        }
        local_40 = local_40 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
  }
  return;
}

