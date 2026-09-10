// Address: 0058a954
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_0058a954(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int *in_FS_OFFSET;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  undefined4 local_3c;
  int *local_38 [4];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0x11;
  do {
    local_c = 0;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  UNLOCK();
  local_24 = (undefined1 *)0x58a984;
  local_8 = local_14;
  FUN_00405658(local_38,PTR_DAT_004010e8,9);
  local_28 = &LAB_0058b0d0;
  local_38[3] = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)(local_38 + 3);
  local_38[2] = (int *)0x58a99a;
  local_24 = &stack0xfffffffc;
  FUN_00404ff0(&local_14);
  if ((param_2 < 7) || (9 < param_2)) {
    local_38[2] = (int *)0x58a9b0;
    FUN_00404ff0(&local_8);
    if (param_2 == 1) {
      if (*(int *)(PTR_DAT_0066ac78 + 0xc0) == 0) {
        local_38[2] = (int *)0x58a9dc;
        FUN_00642c50(*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_1 * 0x2f8) + 0x22,&local_8);
      }
      else {
        local_38[2] = &local_10;
        local_38[1] = (int *)0x58a9ed;
        FUN_0058a7bc(param_1,1,0);
        local_38[2] = (int *)0x58a9fd;
        FUN_00642c50(local_10 + 0xb7,&local_3c);
        local_38[2] = (int *)local_3c;
        local_38[1] = (int *)&DAT_0058b0e4;
        local_38[0] = (int *)0x58aa13;
        FUN_00642c50(local_c + 0x22,&local_40);
        local_38[0] = local_40;
        local_3c = 0x58aa23;
        FUN_00405330(&local_8,3);
      }
    }
    if (param_2 == 2) {
      local_38[2] = (int *)0x58aa39;
      FUN_00642c50(0xd5,&local_44);
      local_38[2] = (int *)0x58aa44;
      thunk_FUN_0040502c(local_38,local_44);
      local_38[2] = (int *)0x58aa51;
      FUN_00642c50(0xd5,&local_48);
      local_38[2] = (int *)0x58aa5c;
      thunk_FUN_0040502c(local_38 + 1,local_48);
      local_38[2] = (int *)0x58aa69;
      FUN_00642c50(0xd6,&local_4c);
      local_38[2] = (int *)0x58aa74;
      thunk_FUN_0040502c(local_38 + 2,local_4c);
      local_38[2] = (int *)0x58aa81;
      FUN_00642c50(0xd7,&local_50);
      local_38[2] = (int *)0x58aa8c;
      thunk_FUN_0040502c(local_38 + 3,local_50);
      local_38[2] = (int *)0x58aa99;
      FUN_00642c50(0xd8,&local_54);
      local_38[2] = (int *)0x58aaa4;
      thunk_FUN_0040502c(&local_28,local_54);
      local_38[2] = (int *)0x58aab1;
      FUN_00642c50(0xd9,&local_58);
      local_38[2] = (int *)0x58aabc;
      thunk_FUN_0040502c(&local_24,local_58);
      local_38[2] = (int *)0x58aac9;
      FUN_00642c50(0x197,&local_5c);
      local_38[2] = (int *)0x58aad4;
      thunk_FUN_0040502c(&stack0xffffffe0,local_5c);
      if (*(int *)(PTR_DAT_0066ac78 + 0xc0) == 0) {
        if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x214 + param_1 * 0x2f8) == '\0') {
          local_38[2] = &local_10;
          local_38[1] = (int *)0x58ab26;
          FUN_0058a7bc(param_1,2,0);
          if (local_10 == 6) {
            local_38[2] = (int *)0x58ab39;
            FUN_00642c50(0x197,&local_8);
          }
          else if (local_10 == 5) {
            local_38[2] = (int *)0x58ab51;
            FUN_00642c50(0x198,&local_8);
          }
          else {
            local_38[2] = (int *)0x58ab65;
            thunk_FUN_0040502c(&local_8,local_38[local_10]);
          }
        }
        else {
          local_38[2] = (int *)0x58ab12;
          thunk_FUN_0040502c(&local_8,local_38[*(int *)(PTR_DAT_0066ac78 + 0x110)]);
        }
      }
      else {
        local_38[2] = &local_10;
        local_38[1] = (int *)0x58ab76;
        FUN_0058a7bc(param_1,2,0);
        if (local_10 == 6) {
          local_38[2] = (int *)0x58ab89;
          FUN_00642c50(0x197,&local_8);
        }
        else if (local_10 == 5) {
          local_38[2] = (int *)0x58ab9e;
          FUN_00642c50(0x198,&local_8);
        }
        else {
          local_38[2] = (int *)0x58abaf;
          thunk_FUN_0040502c(&local_8,local_38[local_10]);
        }
        local_38[2] = (int *)0x58abca;
        iVar3 = FUN_006454a8(2,*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_1 * 0x2f8),0)
        ;
        if (param_1 == iVar3) {
          local_38[2] = (int *)0x58abdb;
          FUN_00642c50(0x197,&local_8);
        }
      }
    }
    if ((param_2 == 5) && (*(int *)(PTR_DAT_0066ac78 + 0xc0) != 0)) {
      local_38[2] = &local_10;
      local_38[1] = (int *)0x58ac04;
      FUN_0058a7bc(param_1,5,0);
      if (local_10 == 10) {
        local_38[2] = (int *)0x58ac19;
        FUN_00642c50(0xd5,&local_8);
      }
      else if (local_10 == 0x14) {
        local_38[2] = (int *)0x58ac2d;
        FUN_00642c50(0xd8,&local_8);
      }
      else if (local_10 == 1) {
        local_38[2] = (int *)0x58ac41;
        FUN_00642c50(0x197,&local_8);
      }
      else if (local_10 == 2) {
        local_38[2] = (int *)0x58ac55;
        FUN_00642c50(0x198,&local_8);
      }
      else if (local_10 == 3) {
        local_38[2] = (int *)0x58ac69;
        FUN_00642c50(0x21e,&local_8);
      }
      else if (local_10 == 4) {
        local_38[2] = (int *)0x58ac7d;
        FUN_00642c50(0x21f,&local_8);
      }
    }
    if ((param_2 == 3) &&
       ((0 < *(int *)(PTR_DAT_0066ac78 + 0xc0) || (7 < *(int *)(PTR_DAT_0066ac78 + 0x188))))) {
      local_38[2] = &local_10;
      local_38[1] = (int *)0x58acb4;
      FUN_0058a7bc(param_1,3,0);
      if (local_c < 2) {
        if ((local_10 == 0x15) || (local_10 == 0x16)) {
          local_38[2] = (int *)0x58ad1a;
          thunk_FUN_0040502c(&local_14,L"Elim. Semi-finais");
        }
        else if ((local_10 == 0x29) || (local_10 == 0x2a)) {
          local_38[2] = (int *)0x58ad35;
          thunk_FUN_0040502c(&local_14,L"Elim vvvvvvvvvvvvvvv. Quartas-finais");
        }
        else if (local_10 != 0) {
          local_38[2] = (int *)0x58ad48;
          FUN_00409dd8(local_10,&local_6c);
          local_38[2] = (int *)0x58ad55;
          FUN_00404bac(&local_6c,&LAB_0058b17c);
          local_38[2] = (int *)0x58ad60;
          FUN_004051d4(&local_14,local_6c);
        }
        local_38[2] = (int *)local_14;
        local_38[1] = (int *)&DAT_0058b0e4;
        local_38[0] = (int *)0x58ad75;
        FUN_00642c50(0x23,&local_70);
        local_38[0] = local_70;
        local_3c = 0x58ad85;
        FUN_00405330(&local_8,3);
        if (local_10 == 0) {
          local_38[2] = (int *)0x58ad93;
          FUN_00404ff0(&local_8);
        }
      }
      else {
        local_38[2] = (int *)0x58acc8;
        FUN_00642c50(local_c + 0x22,&local_60);
        local_38[2] = (int *)local_60;
        local_38[1] = (int *)0x58acd7;
        FUN_00409dd8(local_10,&local_68);
        local_38[1] = (int *)0x58ace4;
        FUN_00404bac(&local_68,&DAT_0058b0f4);
        local_38[1] = (int *)0x58acef;
        FUN_004051d4(&local_64,local_68);
        piVar1 = local_38[2];
        local_38[2] = (int *)0x58acfb;
        FUN_004052cc(&local_8,local_64,piVar1);
      }
    }
    if ((param_2 == 4) || (param_2 == 6)) {
      local_38[2] = (int *)0x58adae;
      FUN_00642c50(0x197,&local_74);
      local_38[2] = (int *)0x58adb9;
      thunk_FUN_0040502c(local_38,local_74);
      local_38[2] = (int *)0x58adc6;
      FUN_00642c50(0xd5,&local_78);
      local_38[2] = (int *)0x58add1;
      thunk_FUN_0040502c(local_38 + 1,local_78);
      local_38[2] = (int *)0x58adde;
      FUN_00642c50(0xd5,&local_7c);
      local_38[2] = (int *)0x58ade9;
      thunk_FUN_0040502c(local_38 + 2,local_7c);
      local_38[2] = (int *)0x58adf6;
      FUN_00642c50(0xd5,&local_80);
      local_38[2] = (int *)0x58ae01;
      thunk_FUN_0040502c(local_38 + 3,local_80);
      local_38[2] = (int *)0x58ae0e;
      FUN_00642c50(0xd6,&local_84);
      local_38[2] = (int *)0x58ae19;
      thunk_FUN_0040502c(&local_28,local_84);
      local_38[2] = (int *)0x58ae29;
      FUN_00642c50(0xd7,&local_88);
      local_38[2] = (int *)0x58ae37;
      thunk_FUN_0040502c(&local_24,local_88);
      local_38[2] = (int *)0x58ae47;
      FUN_00642c50(0xd8,&local_8c);
      local_38[2] = (int *)0x58ae55;
      thunk_FUN_0040502c(&stack0xffffffe0,local_8c);
      local_38[2] = (int *)0x58ae65;
      FUN_00642c50(0xd9,&local_90);
      local_38[2] = (int *)0x58ae73;
      thunk_FUN_0040502c(&stack0xffffffe4,local_90);
      local_38[2] = (int *)0x58ae83;
      FUN_00642c50(0x197,&local_94);
      local_38[2] = (int *)0x58ae91;
      thunk_FUN_0040502c(&stack0xffffffe8,local_94);
      if (*(int *)(PTR_DAT_0066ac78 + 0xc0) == 0) {
        if (param_2 == 4) {
          if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x217 + param_1 * 0x2f8) == '\0') {
            local_38[2] = &local_10;
            local_38[1] = (int *)0x58af06;
            FUN_0058a7bc(param_1,4,0);
            if (local_10 == 8) {
              local_38[2] = (int *)0x58af19;
              FUN_00642c50(0x197,&local_8);
            }
            else if (local_10 == 7) {
              local_38[2] = (int *)0x58af2e;
              FUN_00642c50(0x198,&local_8);
            }
            else {
              local_38[2] = (int *)0x58af3f;
              thunk_FUN_0040502c(&local_8,local_38[local_10]);
            }
          }
          else if (*(int *)(PTR_DAT_0066ac78 + 0x194) < 5) {
            local_38[2] = (int *)0x58aedb;
            FUN_00642c50(0xd5,&local_8);
          }
          else {
            local_38[2] = (int *)0x58aef5;
            thunk_FUN_0040502c(&local_8,local_38[*(int *)(PTR_DAT_0066ac78 + 0x194)]);
          }
        }
        if (param_2 == 6) {
          if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x218 + param_1 * 0x2f8) == '\0') {
            local_38[2] = &local_10;
            local_38[1] = (int *)0x58afa9;
            FUN_0058a7bc(param_1,6,0);
            if (local_10 == 8) {
              local_38[2] = (int *)0x58afbc;
              FUN_00642c50(0x197,&local_8);
            }
            else if (local_10 == 7) {
              local_38[2] = (int *)0x58afd1;
              FUN_00642c50(0x198,&local_8);
            }
            else {
              local_38[2] = (int *)0x58afe2;
              thunk_FUN_0040502c(&local_8,local_38[local_10]);
            }
          }
          else if (*(int *)(PTR_DAT_0066ac78 + 0x1a0) < 5) {
            local_38[2] = (int *)0x58af78;
            FUN_00642c50(0xd5,&local_8);
          }
          else {
            local_38[2] = (int *)0x58af95;
            thunk_FUN_0040502c(&local_8,local_38[*(int *)(PTR_DAT_0066ac78 + 0x1a0)]);
          }
        }
      }
      else {
        local_38[2] = &local_10;
        local_38[1] = (int *)0x58aff3;
        FUN_0058a7bc(param_1,param_2,0);
        if (local_10 == 8) {
          local_38[2] = (int *)0x58b006;
          FUN_00642c50(0x197,&local_8);
        }
        else if (local_10 == 7) {
          local_38[2] = (int *)0x58b01b;
          FUN_00642c50(0x198,&local_8);
        }
        else {
          local_38[2] = (int *)0x58b02c;
          thunk_FUN_0040502c(&local_8,local_38[local_10]);
        }
      }
    }
    if (param_2 == 10) {
      local_38[2] = (int *)0x58b036;
      iVar3 = FUN_00645408();
      if (iVar3 == -1) {
        local_38[2] = &local_10;
        local_38[1] = (int *)0x58b048;
        FUN_0058a7bc(param_1,10,0);
        if (local_10 == 1) {
          local_38[2] = (int *)0x58b05b;
          FUN_00642c50(0x197,&local_8);
        }
        else {
          local_38[2] = (int *)0x58b06a;
          FUN_00642c50(0x198,&local_8);
        }
      }
    }
    local_38[2] = (int *)0x58b075;
    FUN_0040502c(param_4,local_8);
  }
  puVar2 = local_24;
  *in_FS_OFFSET = (int)local_38[3];
  local_24 = &LAB_0058b0d7;
  local_28 = (undefined1 *)0x58b092;
  FUN_00405008(&local_94,10,puVar2);
  local_28 = (undefined1 *)0x58b09f;
  FUN_004048f8(&local_6c,2);
  local_28 = (undefined1 *)0x58b0ac;
  FUN_00405008(&local_64,0xb);
  local_28 = (undefined1 *)0x58b0bf;
  FUN_00405744(local_38,PTR_DAT_004010e8,9);
  local_28 = (undefined1 *)0x58b0c7;
  FUN_00404ff0(&local_14);
  local_28 = (undefined1 *)0x58b0cf;
  FUN_00404ff0(&local_8);
  return;
}

