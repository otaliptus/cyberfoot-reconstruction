// Address: 005f768c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f768c(int param_1)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  int local_38;
  char *local_30;
  char local_2c [28];
  
  bVar1 = false;
  iVar5 = 0x1b;
  pcVar2 = local_2c;
  do {
    *pcVar2 = '\0';
    pcVar2 = pcVar2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 3) {
    iVar5 = 0;
    local_30 = PTR_DAT_0066ae98 + 0x52d;
    pcVar2 = local_2c;
    do {
      if ((*local_30 != '\0') && (iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b154), -1 < iVar3)
         ) {
        iVar3 = iVar3 + 1;
        iVar6 = 0;
        do {
          if (((*(double *)(*(int *)PTR_DAT_0066b154 + 0x40 + iVar6 * 600) ==
                *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10))
              && (*(int *)(*(int *)PTR_DAT_0066b154 + 0x30 + iVar6 * 600) ==
                  *(int *)(PTR_DAT_0066ac78 + 0x88))) &&
             (iVar5 == *(int *)(*(int *)PTR_DAT_0066b154 + 0x3c + iVar6 * 600))) {
            *pcVar2 = '\x01';
            break;
          }
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar5 = iVar5 + 1;
      pcVar2 = pcVar2 + 1;
      local_30 = local_30 + 0x568;
    } while (iVar5 != 0x1b);
  }
  iVar5 = *(int *)(PTR_DAT_0066ac78 + 0x88);
  if (((iVar5 == 2) || (iVar5 == 0)) || ((iVar5 == 5 || (iVar5 == 10)))) {
    FUN_00466128(*(undefined4 *)(param_1 + 0x3d0),0);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) != 1) {
    FUN_00466128(*(undefined4 *)(param_1 + 0x3d4),0);
  }
  if (PTR_DAT_0066ac78[0x6c8] != '\0') {
    FUN_0043b234(*(undefined4 *)(param_1 + 0x300),1);
  }
  FUN_004e1414(*(undefined4 *)(param_1 + 0x328),*(undefined4 *)PTR_DAT_0066b11c);
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 3) {
    FUN_004659e8(*(undefined4 *)(param_1 + 0x308),0x1e0);
    FUN_00466128(DAT_006d4064,1);
    local_38 = 0;
    iVar5 = 0;
    pcVar2 = local_2c;
    puVar7 = (undefined4 *)PTR_PTR_0066b288;
    do {
      if (*pcVar2 != '\0') {
        FUN_004553ac(DAT_006d4064[0xa3]);
        piVar4 = (int *)FUN_00443198(DAT_006d4064[0xa3],local_38);
        (**(code **)(*piVar4 + 0x20))(piVar4,*puVar7);
        piVar4 = (int *)FUN_00443198(DAT_006d4064[0xa3],local_38);
        (**(code **)(*piVar4 + 0x28))(piVar4,iVar5);
        (&DAT_006d3ff8)[local_38] = iVar5;
        local_38 = local_38 + 1;
      }
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 1;
      pcVar2 = pcVar2 + 1;
    } while (iVar5 != 0x1b);
    DAT_006d3ff4 = 0x1c;
    iVar5 = 0;
    pcVar2 = PTR_DAT_0066ae98 + 0x52d;
    do {
      if (((*pcVar2 != '\0') && (pcVar2[-1] != '\0')) && (iVar3 = iVar5, pcVar2[2] == '\0')) break;
      iVar5 = iVar5 + 1;
      pcVar2 = pcVar2 + 0x568;
      iVar3 = DAT_006d3ff4;
    } while (iVar5 != 0x1b);
    DAT_006d3ff4 = iVar3;
    if (DAT_006d3ff4 == 0x1c) {
      DAT_006d3ff4 = *(int *)PTR_DAT_0066b09c;
    }
    if (-1 < local_38 + -1) {
      iVar5 = 0;
      uVar8 = true;
      do {
        iVar3 = FUN_00443198(DAT_006d4064[0xa3],iVar5);
        FUN_00404cf0(*(undefined4 *)(iVar3 + 0x10),
                     *(undefined4 *)(PTR_PTR_0066b288 + DAT_006d3ff4 * 4));
        if ((bool)uVar8) {
          (**(code **)(*DAT_006d4064 + 0xd0))(DAT_006d4064,iVar5);
          bVar1 = true;
          break;
        }
        iVar5 = iVar5 + 1;
        local_38 = local_38 + -1;
        uVar8 = local_38 == 0;
      } while (!(bool)uVar8);
    }
    if (!bVar1) {
      (**(code **)(*DAT_006d4064 + 0xd0))(DAT_006d4064,0);
      DAT_006d3ff4 = DAT_006d3ff8;
    }
  }
  FUN_005f60a4(param_1);
  FUN_005f7970(param_1);
  return;
}

