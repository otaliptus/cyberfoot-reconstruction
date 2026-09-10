// Address: 00630838
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm9_XiButton2Click(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 unaff_EBX;
  int iVar7;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar8;
  undefined4 local_30;
  undefined1 **local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_c;
  
  uVar6 = (undefined2)((uint)param_2 >> 0x10);
  local_20 = &stack0xfffffffc;
  iVar5 = 5;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_24 = &LAB_00630b1a;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_c = 0;
  bVar1 = false;
  puVar3 = &stack0xfffffffc;
  if (*(char *)(*(int *)(param_1 + 0x354) + 0x211) != '\0') {
    local_2c = (undefined1 **)0x63088c;
    iVar5 = (**(code **)(**(int **)(param_1 + 0x308) + 0x11c))();
    if (-1 < iVar5 + -1) {
      iVar7 = 0;
      uVar8 = true;
      do {
        local_2c = (undefined1 **)&stack0xffffffec;
        local_30 = 0x6308b2;
        (**(code **)(**(int **)(param_1 + 0x308) + 0x100))(*(int **)(param_1 + 0x308),1,iVar7);
        local_2c = (undefined1 **)0x6308bf;
        FUN_00405378(unaff_EBX,&DAT_00630b2c);
        if ((bool)uVar8) {
          local_c = local_c + 1;
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
        uVar8 = iVar5 == 0;
      } while (!(bool)uVar8);
    }
    if (local_c == 0) {
      if (*PTR_DAT_0066b700 == '\0') {
        local_2c = (undefined1 **)0x6308e5;
        FUN_00642c50(0x1f,&stack0xffffffe4);
        local_2c = (undefined1 **)0x6308f0;
        FUN_00404b6c(&stack0xffffffe8,unaff_EDI);
        local_2c = (undefined1 **)0x6308f8;
        FUN_00437fe8(unaff_ESI);
      }
      else {
        local_2c = (undefined1 **)0x630907;
        FUN_00437fe8("Select at least one league");
      }
      goto LAB_00630acf;
    }
    local_2c = (undefined1 **)0x63091d;
    iVar5 = (**(code **)(**(int **)(param_1 + 0x308) + 0x11c))();
    uVar6 = extraout_var;
    if (-1 < iVar5 + -1) {
      iVar7 = 0;
      do {
        local_2c = &local_24;
        local_30 = 0x630943;
        (**(code **)(**(int **)(param_1 + 0x308) + 0x100))(*(int **)(param_1 + 0x308),3,iVar7);
        local_2c = (undefined1 **)0x63094e;
        FUN_00404b6c(&local_20,local_24);
        local_2c = (undefined1 **)0x630956;
        iVar4 = FUN_00409ff8(local_20);
        uVar8 = iVar4 == 0x2a;
        uVar6 = extraout_var_00;
        if (0x29 < iVar4) {
          local_2c = (undefined1 **)&local_28;
          local_30 = 0x630977;
          (**(code **)(**(int **)(param_1 + 0x308) + 0x100))(*(int **)(param_1 + 0x308),1,iVar7);
          local_2c = (undefined1 **)0x630984;
          FUN_00405378(local_28,&DAT_00630b2c);
          uVar6 = extraout_var_01;
          if ((bool)uVar8) {
            bVar1 = true;
            break;
          }
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    puVar3 = local_20;
    if (!bVar1) {
      if (*PTR_DAT_0066b700 == '\0') {
        local_2c = (undefined1 **)0x6309ad;
        FUN_00642c50(0x3dc,&local_30);
        local_2c = (undefined1 **)0x6309b8;
        FUN_00404b6c(&local_2c,local_30);
        ppuVar2 = local_2c;
        local_2c = (undefined1 **)0x6309c0;
        FUN_00437fe8(ppuVar2);
      }
      else {
        local_2c = (undefined1 **)0x6309cf;
        FUN_00437fe8("Select at least a 42 teams league");
      }
      goto LAB_00630acf;
    }
  }
  local_20 = puVar3;
  local_2c = (undefined1 **)0x6309e4;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,CONCAT22(uVar6,0xfff5));
  if (*(char *)(*(int *)(param_1 + 0x354) + 0x211) == '\0') {
    local_2c = (undefined1 **)0x630a83;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0062c014,PTR_DAT_0066ae30);
    local_2c = (undefined1 **)0x630a8d;
    FUN_00483d64(DAT_006d4b8c);
    local_2c = (undefined1 **)0x630a9b;
    FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
    local_2c = (undefined1 **)0x630aa7;
    FUN_00483d6c(*(undefined4 *)PTR_DAT_0066ae30);
  }
  else {
    local_2c = (undefined1 **)0x6309fe;
    FUN_00630654(param_1);
    local_2c = (undefined1 **)0x630a03;
    FUN_00630428();
    local_2c = (undefined1 **)0x630a08;
    FUN_006305e0();
    *(undefined4 *)PTR_DAT_0066b2e4 = 0;
    local_2c = (undefined1 **)0x630a1d;
    iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
    if (-1 < iVar5 + -1) {
      iVar7 = 0;
      do {
        local_2c = (undefined1 **)0x630a43;
        FUN_00631634(iVar7,*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar7 * 0x294));
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_2c = (undefined1 **)0x0;
    local_30 = 0x630a5e;
    FUN_004060a8(&DAT_006d4b98,PTR_DAT_0062ebe4,1);
    local_2c = (undefined1 **)0x630a69;
    FUN_006307d4(param_1);
  }
  local_2c = (undefined1 **)0x630ab5;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
  local_2c = (undefined1 **)0x0;
  local_30 = 0x630acc;
  FUN_004060a8(&DAT_006d4b98,PTR_DAT_0062ebe4,1);
LAB_00630acf:
  puVar3 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_00630b21;
  local_24 = (undefined1 *)0x630ae4;
  FUN_00404ff0(&local_30,local_28,puVar3);
  local_24 = (undefined1 *)0x630aec;
  FUN_004048d4(&local_2c);
  local_24 = (undefined1 *)0x630af9;
  FUN_00405008(&local_28,2);
  local_24 = (undefined1 *)0x630b01;
  FUN_004048d4(&local_20);
  local_24 = (undefined1 *)0x630b09;
  FUN_00404ff0(&stack0xffffffe4);
  local_24 = (undefined1 *)0x630b11;
  FUN_004048d4(&stack0xffffffe8);
  local_24 = (undefined1 *)0x630b19;
  FUN_00404ff0(&stack0xffffffec);
  return;
}

