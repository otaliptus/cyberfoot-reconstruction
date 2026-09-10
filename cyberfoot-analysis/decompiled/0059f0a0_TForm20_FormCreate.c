// Address: 0059f0a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm20_FormCreate(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int unaff_ESI;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_38;
  char *local_34;
  wchar_t *local_30;
  undefined1 *local_2c;
  wchar_t *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 *local_1c;
  int local_c;
  int local_8;
  
  local_1c = (undefined4 *)&stack0xfffffffc;
  iVar3 = 9;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_20 = &LAB_0059f485;
  local_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_c = 0;
  local_28 = L"<p align=\"center\"><shad>";
  local_2c = (undefined1 *)0x59f0d9;
  FUN_00642c50(0x7e,&local_24);
  local_2c = local_24;
  local_30 = L"</shad></p>";
  local_34 = (char *)0x59f0ee;
  FUN_00405330(&local_20,3);
  local_34 = (char *)0x59f0fc;
  FUN_00545088(*(undefined4 *)(param_1 + 0x32c),local_20);
  local_34 = (char *)0x59f109;
  FUN_00642c50(0x152,&local_28);
  local_34 = (char *)0x59f11a;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x300) + 0x60),local_28);
  local_34 = (char *)0x59f127;
  FUN_00642c50(0x141,&local_2c);
  local_34 = (char *)0x59f138;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x304) + 0x60),local_2c);
  local_34 = (char *)0x59f145;
  FUN_00642c50(0x153,&local_30);
  local_34 = (char *)0x59f156;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0x60),local_30);
  local_34 = (char *)0x59f163;
  FUN_00642c50(0x153,&local_34);
  pcVar5 = local_34;
  local_34 = (char *)0x59f174;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x314) + 0x60),pcVar5);
  local_34 = (char *)0x59f181;
  FUN_00642c50(0x154,&local_38);
  local_34 = (char *)0x59f192;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x30c) + 0x60),local_38);
  local_34 = (char *)0x59f19f;
  FUN_00642c50(0x154,&local_3c);
  local_34 = (char *)0x59f1b0;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x318) + 0x60),local_3c);
  local_34 = (char *)0x59f1bd;
  FUN_00642c50(0x158,&local_40);
  local_34 = (char *)0x59f1cb;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x31c),local_40);
  local_34 = (char *)0x59f1d7;
  iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (iVar3 < 2) {
    local_34 = (char *)0x59f2c6;
    FUN_00466128(*(undefined4 *)(param_1 + 0x330),0);
    DAT_006d247c = 0;
  }
  else {
    if (-1 < iVar3 + -1) {
      iVar6 = 0;
      do {
        local_8 = 0xca;
        piVar4 = (int *)(PTR_DAT_0066b2bc + 4);
        do {
          if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar6 * 0x294) == *piVar4) {
            local_34 = "<img src=\"idx:";
            local_38 = 0x59f227;
            FUN_00409dd8(*piVar4,&local_4c);
            local_38 = local_4c;
            local_3c = &DAT_0059f508;
            local_40 = 0x59f23c;
            FUN_00404c64(&local_48,3);
            local_34 = (char *)0x59f247;
            FUN_004051d4(&local_44,local_48);
            local_34 = (char *)0x59f252;
            FUN_0040526c(&local_44,piVar4[-1]);
            local_34 = (char *)0x59f260;
            FUN_0054cd98(*(undefined4 *)(param_1 + 0x330),local_44);
            if (unaff_ESI == *piVar4) {
              local_c = iVar6;
            }
          }
          piVar4 = piVar4 + 2;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if ((local_c < 0) || (0xca < local_c)) {
      local_34 = (char *)0x59f2b0;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x330),0);
      DAT_006d247c = 0;
    }
    else {
      local_34 = (char *)0x59f299;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x330),local_c);
      DAT_006d247c = local_c;
    }
  }
  local_34 = (char *)0x59f2d4;
  FUN_0059f50c(param_1);
  if (PTR_DAT_0066ac78[0x170] != '\0') {
    iVar3 = 0;
    iVar6 = 0;
    pcVar5 = PTR_DAT_0066ae98 + 0x52d;
    local_1c = (undefined4 *)PTR_PTR_0066b050;
    do {
      if (*pcVar5 != '\0') {
        local_34 = (char *)0x59f317;
        FUN_004553ac(*(undefined4 *)(*(int *)(param_1 + 0x2f8) + 0x28c));
        local_34 = (char *)0x59f32b;
        piVar4 = (int *)FUN_00443198(*(undefined4 *)(*(int *)(param_1 + 0x2f8) + 0x28c),iVar3);
        local_34 = (char *)0x59f335;
        (**(code **)(*piVar4 + 0x20))(piVar4,*local_1c);
        local_34 = (char *)0x59f349;
        piVar4 = (int *)FUN_00443198(*(undefined4 *)(*(int *)(param_1 + 0x2f8) + 0x28c),iVar3);
        local_34 = (char *)0x59f350;
        (**(code **)(*piVar4 + 0x28))(piVar4,iVar6);
        *(int *)(&DAT_006d240c + iVar3 * 4) = iVar6;
        iVar3 = iVar3 + 1;
      }
      iVar6 = iVar6 + 1;
      local_1c = local_1c + 1;
      pcVar5 = pcVar5 + 0x568;
    } while (iVar6 != 0x1b);
    DAT_006d2478 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8
                           );
    if (PTR_DAT_0066ae98[DAT_006d2478 * 0x568 + 0x52d] == '\0') {
      if (PTR_DAT_0066ae98[0x8c55] == '\0') {
        if (PTR_DAT_0066ae98[0x667d] == '\0') {
          DAT_006d2478 = 10;
        }
        else {
          DAT_006d2478 = 0x12;
        }
      }
      else {
        DAT_006d2478 = 0x19;
      }
    }
    if ((PTR_DAT_0066ae98[DAT_006d2478 * 0x568 + 0x52d] != '\0') && (-1 < iVar3 + -1)) {
      iVar6 = 0;
      uVar7 = true;
      do {
        local_34 = (char *)0x59f41a;
        iVar2 = FUN_00443198(*(undefined4 *)(*(int *)(param_1 + 0x2f8) + 0x28c),iVar6);
        local_34 = (char *)0x59f431;
        FUN_00404cf0(*(undefined4 *)(iVar2 + 0x10),
                     *(undefined4 *)(PTR_PTR_0066b050 + DAT_006d2478 * 4));
        if ((bool)uVar7) {
          local_34 = (char *)0x59f443;
          (**(code **)(**(int **)(param_1 + 0x2f8) + 0xd0))(*(int **)(param_1 + 0x2f8),iVar6);
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
        uVar7 = iVar3 == 0;
      } while (!(bool)uVar7);
    }
  }
  local_34 = (char *)0x1;
  local_38 = 0x59f45d;
  FUN_0059e9d0(param_1,1,DAT_006d247c);
  puVar1 = local_2c;
  *in_FS_OFFSET = local_34;
  local_2c = &LAB_0059f48c;
  local_30 = L"䖍뫀\n";
  FUN_004048f8(&local_4c,2,puVar1);
  local_30 = (wchar_t *)0x59f484;
  FUN_00405008(&local_44,10);
  return;
}

