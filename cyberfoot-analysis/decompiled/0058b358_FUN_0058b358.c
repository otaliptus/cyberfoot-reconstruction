// Address: 0058b358
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_0058b358(int param_1,int param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  int unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 *local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 *local_17c;
  undefined4 local_178;
  int local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  int local_160;
  undefined1 local_15c [4];
  undefined1 local_158 [4];
  undefined1 local_154 [4];
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  undefined1 local_148 [16];
  undefined1 local_138 [4];
  int local_134 [56];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  int local_2c [2];
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  
  iVar4 = 0x3c;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = (undefined1 *)0x58b387;
  FUN_00405658(&local_160,PTR_DAT_004010e8,0xb);
  local_24 = &LAB_0058bdc3;
  local_2c[1] = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)(local_2c + 1);
  local_2c[0] = 0x58b3a5;
  local_20 = &stack0xfffffffc;
  FUN_00642c50(0xd4,&local_164);
  local_2c[0] = 0x58b3b6;
  thunk_FUN_0040502c(&local_160,local_164);
  local_2c[0] = 0x58b3d5;
  FUN_00645c68(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066b194 * 0x2f8),
               &local_168);
  local_2c[0] = 0x58b3e6;
  thunk_FUN_0040502c(local_15c,local_168);
  local_2c[0] = 0x58b405;
  FUN_006458c8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066b194 * 0x2f8),
               &local_16c);
  local_2c[0] = 0x58b416;
  thunk_FUN_0040502c(local_158,local_16c);
  local_2c[0] = 0x58b43f;
  FUN_004051d4(local_154,
               *(undefined4 *)
                (PTR_PTR_0066b288 +
                *(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + *(int *)PTR_DAT_0066b194 * 0x2f8) * 4));
  local_2c[0] = 0x58b450;
  thunk_FUN_0040502c(local_150,DAT_006d2200);
  local_2c[0] = 0x58b460;
  FUN_00642c50(0xe0,&local_170);
  local_2c[0] = 0x58b471;
  thunk_FUN_0040502c(local_14c,local_170);
  local_2c[0] = 0x58b482;
  thunk_FUN_0040502c(local_148,DAT_006d2204);
  local_2c[0] = 0x58b493;
  thunk_FUN_0040502c(local_138,DAT_006d2208);
  iVar4 = 6;
  piVar2 = local_2c;
  do {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 7;
  piVar2 = local_134;
  do {
    iVar5 = 6;
    piVar3 = piVar2;
    do {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    piVar2 = piVar2 + 6;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_2c[0] = 0x58b4d3;
  iVar4 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066ae84);
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066ae84 + 0x10 + iVar5 * 0x18) == param_2) &&
         ((*(int *)(*(int *)PTR_DAT_0066ae84 + iVar5 * 0x18) == *(int *)PTR_DAT_0066b194 ||
          (*(int *)(*(int *)PTR_DAT_0066ae84 + 4 + iVar5 * 0x18) == *(int *)PTR_DAT_0066b194)))) {
        local_2c[0] = local_2c[0] + 1;
        local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6] =
             local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6] + 1;
        if (*(int *)(*(int *)PTR_DAT_0066ae84 + iVar5 * 0x18) == *(int *)PTR_DAT_0066b194) {
          if (0 < *(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18)) {
            unaff_EDI = unaff_EDI + *(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18);
            local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 4] =
                 local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 4] +
                 *(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18);
          }
          if (0 < *(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18)) {
            unaff_ESI = unaff_ESI + *(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18);
            local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 5] =
                 local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 5] +
                 *(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18);
          }
          if (*(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18) <
              *(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18)) {
            local_24 = local_24 + 1;
            local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 2] =
                 local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 2] + 1;
          }
          else if (*(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18) <
                   *(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18)) {
            local_20 = local_20 + 1;
            local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 3] =
                 local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 3] + 1;
          }
          else {
            local_2c[1] = local_2c[1] + 1;
            local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 1] =
                 local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 1] + 1;
          }
        }
        else if (*(int *)(*(int *)PTR_DAT_0066ae84 + 4 + iVar5 * 0x18) == *(int *)PTR_DAT_0066b194)
        {
          if (0 < *(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18)) {
            unaff_EDI = unaff_EDI + *(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18);
            local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 4] =
                 local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 4] +
                 *(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18);
          }
          if (0 < *(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18)) {
            unaff_ESI = unaff_ESI + *(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18);
            local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 5] =
                 local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 5] +
                 *(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18);
          }
          if (*(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18) <
              *(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18)) {
            local_24 = local_24 + 1;
            local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 2] =
                 local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 2] + 1;
          }
          else if (*(int *)(*(int *)PTR_DAT_0066ae84 + 0xc + iVar5 * 0x18) <
                   *(int *)(*(int *)PTR_DAT_0066ae84 + 8 + iVar5 * 0x18)) {
            local_20 = local_20 + 1;
            local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 3] =
                 local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 3] + 1;
          }
          else {
            local_2c[1] = local_2c[1] + 1;
            local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 1] =
                 local_134[*(int *)(*(int *)PTR_DAT_0066ae84 + 0x14 + iVar5 * 0x18) * 6 + 1] + 1;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (0 < local_2c[0]) {
    local_2c[0] = 0x58b7fc;
    (**(code **)(**(int **)(param_1 + 0x30c) + 0x1f0))(*(int **)(param_1 + 0x30c),0);
    local_2c[0] = 0x58b811;
    FUN_00409dd8(*(int *)PTR_DAT_0066b7c4 + param_2,&local_178);
    local_2c[0] = 0x58b822;
    FUN_004051d4(&local_174,local_178);
    local_2c[0] = local_174;
    puStack_30 = (undefined4 *)0x58b83e;
    (**(code **)(**(int **)(param_1 + 0x30c) + 0x194))(*(int **)(param_1 + 0x30c),0,0);
    puStack_30 = (undefined4 *)0x58b84c;
    FUN_00409dd8(local_2c[0],&local_180);
    puStack_30 = (undefined4 *)0x58b85d;
    FUN_004051d4(&local_17c,local_180);
    puStack_30 = local_17c;
    uStack_34 = 0x58b87c;
    (**(code **)(**(int **)(param_1 + 0x30c) + 0x194))(*(int **)(param_1 + 0x30c),3,0);
    uStack_34 = 0x58b88a;
    FUN_00409dd8(local_24,&local_188);
    uStack_34 = 0x58b89b;
    FUN_004051d4(&local_184,local_188);
    uStack_34 = local_184;
    uStack_38 = 0x58b8ba;
    (**(code **)(**(int **)(param_1 + 0x30c) + 0x194))(*(int **)(param_1 + 0x30c),4,0);
    uStack_38 = 0x58b8c8;
    FUN_00409dd8(local_20,&local_190);
    uStack_38 = 0x58b8d9;
    FUN_004051d4(&local_18c,local_190);
    uStack_38 = local_18c;
    uStack_3c = 0x58b8f8;
    (**(code **)(**(int **)(param_1 + 0x30c) + 0x194))(*(int **)(param_1 + 0x30c),5,0);
    uStack_3c = 0x58b906;
    FUN_00409dd8(local_2c[1],&local_198);
    uStack_3c = 0x58b917;
    FUN_004051d4(&local_194,local_198);
    uStack_3c = local_194;
    uStack_40 = 0x58b936;
    (**(code **)(**(int **)(param_1 + 0x30c) + 0x194))(*(int **)(param_1 + 0x30c),6,0);
    uStack_40 = 0x58b944;
    FUN_00409dd8(unaff_EDI,&local_1a0);
    uStack_40 = 0x58b955;
    FUN_004051d4(&local_19c,local_1a0);
    uStack_40 = local_19c;
    uStack_44 = 0x58b974;
    (**(code **)(**(int **)(param_1 + 0x30c) + 0x194))(*(int **)(param_1 + 0x30c),7,0);
    uStack_44 = 0x58b982;
    FUN_00409dd8(unaff_ESI,&local_1a8);
    uStack_44 = 0x58b993;
    FUN_004051d4(&local_1a4,local_1a8);
    uStack_44 = local_1a4;
    puStack_48 = (undefined4 *)0x58b9b2;
    (**(code **)(**(int **)(param_1 + 0x30c) + 0x194))(*(int **)(param_1 + 0x30c),8,0);
    puStack_48 = &local_1ac;
    uStack_4c = 0x58b9cc;
    func_0x0058b1a0(param_1,*(undefined4 *)PTR_DAT_0066b194,param_2);
    uStack_4c = local_1ac;
    uStack_50 = 0x58b9eb;
    (**(code **)(**(int **)(param_1 + 0x30c) + 0x194))(*(int **)(param_1 + 0x30c),9,0);
    uStack_50 = 0x58b9f9;
    FUN_00409dd8(param_2,&local_1b4);
    uStack_50 = 0x58ba0a;
    FUN_004051d4(&local_1b0,local_1b4);
    uStack_50 = local_1b0;
    uStack_54 = 0x58ba29;
    (**(code **)(**(int **)(param_1 + 0x30c) + 0x194))(*(int **)(param_1 + 0x30c),10,0);
    local_10 = 0;
    iVar4 = 0;
    piVar2 = local_134;
    piVar3 = &local_160;
    do {
      if (0 < *piVar2) {
        local_10 = local_10 + 1;
        local_2c[0] = 0x58ba5f;
        (**(code **)(**(int **)(param_1 + 0x30c) + 0x1f0))(*(int **)(param_1 + 0x30c),local_10);
        local_2c[0] = 0x58ba6d;
        FUN_00511cbc(*(undefined4 *)(param_1 + 0x30c));
        local_2c[0] = *piVar3;
        puStack_30 = (undefined4 *)0x58ba8c;
        (**(code **)(**(int **)(param_1 + 0x30c) + 0x194))(*(int **)(param_1 + 0x30c),1,local_10);
        puStack_30 = &local_1b8;
        uStack_34 = 0x58baa4;
        FUN_0058a954(*(undefined4 *)PTR_DAT_0066b194,iVar4,param_2);
        uStack_34 = local_1b8;
        uStack_38 = 0x58bac4;
        (**(code **)(**(int **)(param_1 + 0x30c) + 0x194))(*(int **)(param_1 + 0x30c),2,local_10);
        uStack_38 = 0x58bad1;
        FUN_00409dd8(*piVar2,&local_1c0);
        uStack_38 = 0x58bae2;
        FUN_004051d4(&local_1bc,local_1c0);
        uStack_38 = local_1bc;
        uStack_3c = 0x58bb02;
        (**(code **)(**(int **)(param_1 + 0x30c) + 0x194))(*(int **)(param_1 + 0x30c),3,local_10);
        uStack_3c = 0x58bb10;
        FUN_00409dd8(piVar2[2],&local_1c8);
        uStack_3c = 0x58bb21;
        FUN_004051d4(&local_1c4,local_1c8);
        uStack_3c = local_1c4;
        uStack_40 = 0x58bb41;
        (**(code **)(**(int **)(param_1 + 0x30c) + 0x194))(*(int **)(param_1 + 0x30c),4,local_10);
        uStack_40 = 0x58bb4f;
        FUN_00409dd8(piVar2[3],&local_1d0);
        uStack_40 = 0x58bb60;
        FUN_004051d4(&local_1cc,local_1d0);
        uStack_40 = local_1cc;
        uStack_44 = 0x58bb80;
        (**(code **)(**(int **)(param_1 + 0x30c) + 0x194))(*(int **)(param_1 + 0x30c),5,local_10);
        uStack_44 = 0x58bb8e;
        FUN_00409dd8(piVar2[1],&local_1d8);
        uStack_44 = 0x58bb9f;
        FUN_004051d4(&local_1d4,local_1d8);
        uStack_44 = local_1d4;
        puStack_48 = (undefined4 *)0x58bbbf;
        (**(code **)(**(int **)(param_1 + 0x30c) + 0x194))(*(int **)(param_1 + 0x30c),6,local_10);
        puStack_48 = (undefined4 *)0x58bbcd;
        FUN_00409dd8(piVar2[4],&local_1e0);
        puStack_48 = (undefined4 *)0x58bbde;
        FUN_004051d4(&local_1dc,local_1e0);
        puStack_48 = local_1dc;
        uStack_4c = 0x58bbfe;
        (**(code **)(**(int **)(param_1 + 0x30c) + 0x194))(*(int **)(param_1 + 0x30c),7,local_10);
        uStack_4c = 0x58bc0c;
        FUN_00409dd8(piVar2[5],&local_1e8);
        uStack_4c = 0x58bc1d;
        FUN_004051d4(&local_1e4,local_1e8);
        uStack_4c = local_1e4;
        uStack_50 = 0x58bc3d;
        (**(code **)(**(int **)(param_1 + 0x30c) + 0x194))(*(int **)(param_1 + 0x30c),8,local_10);
        local_2c[0] = 0x58bc4b;
        FUN_00511cd0(*(undefined4 *)(param_1 + 0x30c));
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      piVar2 = piVar2 + 6;
    } while (iVar4 != 0xb);
  }
  puVar1 = local_20;
  *in_FS_OFFSET = local_2c[1];
  local_20 = &LAB_0058bdcd;
  local_24 = (undefined1 *)0x58bc74;
  FUN_004048d4(&local_1e8,local_2c[1],puVar1);
  local_24 = (undefined1 *)0x58bc7f;
  FUN_00404ff0(&local_1e4);
  local_24 = (undefined1 *)0x58bc8a;
  FUN_004048d4(&local_1e0);
  local_24 = (undefined1 *)0x58bc95;
  FUN_00404ff0(&local_1dc);
  local_24 = (undefined1 *)0x58bca0;
  FUN_004048d4(&local_1d8);
  local_24 = (undefined1 *)0x58bcab;
  FUN_00404ff0(&local_1d4);
  local_24 = (undefined1 *)0x58bcb6;
  FUN_004048d4(&local_1d0);
  local_24 = (undefined1 *)0x58bcc1;
  FUN_00404ff0(&local_1cc);
  local_24 = (undefined1 *)0x58bccc;
  FUN_004048d4(&local_1c8);
  local_24 = (undefined1 *)0x58bcd7;
  FUN_00404ff0(&local_1c4);
  local_24 = (undefined1 *)0x58bce2;
  FUN_004048d4(&local_1c0);
  local_24 = (undefined1 *)0x58bcf2;
  FUN_00405008(&local_1bc,2);
  local_24 = (undefined1 *)0x58bcfd;
  FUN_004048d4(&local_1b4);
  local_24 = (undefined1 *)0x58bd0d;
  FUN_00405008(&local_1b0,2);
  local_24 = (undefined1 *)0x58bd18;
  FUN_004048d4(&local_1a8);
  local_24 = (undefined1 *)0x58bd23;
  FUN_00404ff0(&local_1a4);
  local_24 = (undefined1 *)0x58bd2e;
  FUN_004048d4(&local_1a0);
  local_24 = (undefined1 *)0x58bd39;
  FUN_00404ff0(&local_19c);
  local_24 = (undefined1 *)0x58bd44;
  FUN_004048d4(&local_198);
  local_24 = (undefined1 *)0x58bd4f;
  FUN_00404ff0(&local_194);
  local_24 = (undefined1 *)0x58bd5a;
  FUN_004048d4(&local_190);
  local_24 = (undefined1 *)0x58bd65;
  FUN_00404ff0(&local_18c);
  local_24 = (undefined1 *)0x58bd70;
  FUN_004048d4(&local_188);
  local_24 = (undefined1 *)0x58bd7b;
  FUN_00404ff0(&local_184);
  local_24 = (undefined1 *)0x58bd86;
  FUN_004048d4(&local_180);
  local_24 = (undefined1 *)0x58bd91;
  FUN_00404ff0(&local_17c);
  local_24 = (undefined1 *)0x58bd9c;
  FUN_004048d4(&local_178);
  local_24 = (undefined1 *)0x58bdac;
  FUN_00405008(&local_174,5);
  local_24 = (undefined1 *)0x58bdc2;
  FUN_00405744(&local_160,PTR_DAT_004010e8,0xb);
  return;
}

