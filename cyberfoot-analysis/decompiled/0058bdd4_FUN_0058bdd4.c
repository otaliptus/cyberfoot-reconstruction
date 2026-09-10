// Address: 0058bdd4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0058bdd4(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int iVar4;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 5;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_0058c04a;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = 0x58be13;
  FUN_00405194(&local_8,*(int *)PTR_DAT_0066af70 + *(int *)PTR_DAT_0066b194 * 0x2f8);
  local_2c = 0x58be21;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x338),local_8);
  local_2c = 0x58be30;
  FUN_00645508(*(undefined4 *)PTR_DAT_0066b194,&local_c);
  if (local_c != 0) {
    local_2c = 0x58be45;
    FUN_00645508(*(undefined4 *)PTR_DAT_0066b194,&local_10);
    local_2c = 0x58be59;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0x168),local_10);
  }
  if (PTR_DAT_0066ac78[0x171] != '\0') {
    local_2c = 0x58be84;
    iVar3 = FUN_0064f2d0(*(undefined4 *)
                          (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066b194 * 0x2f8));
    if (iVar3 == 0) {
      local_2c = 0x58be95;
      FUN_00642c50(0xdc,&stack0xffffffec);
      local_2c = 0x58bea2;
      FUN_0040502c(&DAT_006d2200,unaff_EBX);
      local_2c = 0x58beaf;
      FUN_00642c50(0xdd,&stack0xffffffe8);
      local_2c = 0x58bebc;
      FUN_0040502c(&DAT_006d2204,unaff_ESI);
      local_2c = 0x58bec9;
      FUN_00642c50(0x3e5,&stack0xffffffe4);
      local_2c = 0x58bed6;
      FUN_0040502c(&DAT_006d2208,unaff_EDI);
    }
    else {
      local_2c = 0x58bef4;
      iVar3 = FUN_0064f2d0(*(undefined4 *)
                            (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066b194 * 0x2f8));
      if (iVar3 == 1) {
        local_2c = 0x58bf04;
        FUN_00642c50(0xde,&local_20);
        local_2c = 0x58bf11;
        FUN_0040502c(&DAT_006d2200,local_20);
        local_2c = 0x58bf1e;
        FUN_00642c50(0xdf,&local_24);
        local_2c = 0x58bf2b;
        FUN_0040502c(&DAT_006d2204,local_24);
        local_2c = 0x58bf38;
        FUN_00642c50(0x3e4,&local_28);
        local_2c = 0x58bf45;
        FUN_0040502c(&DAT_006d2208,local_28);
      }
      else {
        local_2c = 0x58bf60;
        iVar3 = FUN_0064f2d0(*(undefined4 *)
                              (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066b194 * 0x2f8));
        if (iVar3 == 2) {
          local_2c = 0x58bf72;
          FUN_00642c50(0x3e2,&local_2c);
          uVar1 = local_2c;
          local_2c = 0x58bf7f;
          FUN_0040502c(&DAT_006d2200,uVar1);
        }
        else {
          local_2c = 0x58bf9a;
          iVar3 = FUN_0064f2d0(*(undefined4 *)
                                (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066b194 * 0x2f8)
                              );
          if (iVar3 == 3) {
            local_2c = 0x58bfac;
            FUN_00642c50(0x3e3,&local_30);
            local_2c = 0x58bfb9;
            FUN_0040502c(&DAT_006d2200,local_30);
          }
        }
      }
    }
  }
  iVar3 = *(int *)(PTR_DAT_0066ac78 + 0xc0);
  if (iVar3 < 0x15) {
    if (0 < iVar3) {
      iVar4 = 1;
      do {
        local_2c = 0x58bfe3;
        FUN_0058b358(param_1,iVar4);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    iVar4 = iVar3 + -0x14;
    DAT_006d21fc = iVar4;
    if (iVar4 <= iVar3) {
      iVar3 = (iVar3 - iVar4) + 1;
      do {
        local_2c = 0x58c016;
        FUN_0058b358(param_1,iVar4);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  puVar2 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_0058c051;
  local_24 = (undefined1 *)0x58c034;
  FUN_00405008(&local_30,8,puVar2);
  local_24 = (undefined1 *)0x58c041;
  FUN_004048f8(&local_10,2);
  local_24 = (undefined1 *)0x58c049;
  FUN_00404ff0(&local_8);
  return;
}

