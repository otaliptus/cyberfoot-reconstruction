// Address: 0061c834
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0061c834(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  int iVar3;
  int *piVar4;
  undefined4 unaff_ESI;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_10;
  int local_c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  local_10 = 4;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_20 = &LAB_0061cd79;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = 0x61c863;
  local_8 = param_1;
  FUN_0043b234(DAT_006d4918,0);
  if (DAT_006d48f4 == 0) {
    local_28 = 0;
    FUN_004060a8(&DAT_006d491c,PTR_DAT_0060ee48,1);
    if (0 < *(int *)PTR_DAT_0066aea4) {
      iVar5 = 1;
      local_c = *(int *)PTR_DAT_0066aea4;
      do {
        iVar3 = 1;
        do {
          *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar5 * 0x1bc + 0xac + iVar3 * 4) =
               *(undefined4 *)
                (*(int *)PTR_DAT_0066b238 +
                 *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + iVar5 * 0x1bc) * 0xf8 + -4 + iVar3 * 4);
          *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar5 * 0x1bc + 0xd8 + iVar3 * 4) =
               *(undefined4 *)
                (*(int *)PTR_DAT_0066b238 +
                 *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + iVar5 * 0x1bc) * 0xf8 + -4 + iVar3 * 4);
          *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar5 * 0x1bc + 0x104 + iVar3 * 4) =
               *(undefined4 *)
                (*(int *)PTR_DAT_0066b238 +
                 *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + iVar5 * 0x1bc) * 0xf8 + 0x58 + iVar3 * 4
                );
          *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar5 * 0x1bc + 0x130 + iVar3 * 4) =
               *(undefined4 *)
                (*(int *)PTR_DAT_0066b238 +
                 *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + iVar5 * 0x1bc) * 0xf8 + 0x58 + iVar3 * 4
                );
          iVar3 = iVar3 + 1;
        } while (iVar3 != 0xc);
        local_28 = 0x61c98d;
        FUN_0061c174(local_8,iVar5);
        iVar5 = iVar5 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  DAT_006d48f4 = DAT_006d48f4 + 1;
  if (DAT_006d48f4 == 1) {
    *(undefined4 *)PTR_DAT_0066b2cc = 1;
    local_28 = 0x61c9be;
    FUN_0064d5d4(1,&local_10);
    local_28 = 0x61c9cf;
    FUN_004e1414(*(undefined4 *)(local_8 + 0x2fc),local_10);
    local_28 = 0x61c9df;
    FUN_00466128(*(undefined4 *)(local_8 + 0x30c),1);
    local_28 = 0x61c9f2;
    FUN_004e1414(*(undefined4 *)(local_8 + 0x30c),&DAT_0061cd8c);
  }
  local_28 = 0x61c9fe;
  FUN_00487348(*(undefined4 *)PTR_DAT_0066b3ac);
  if (0 < *(int *)PTR_DAT_0066aea4) {
    iVar5 = 1;
    local_c = *(int *)PTR_DAT_0066aea4;
    do {
      iVar3 = -1;
      if ((int)DAT_006d48f4 < 0xb7) {
        local_28 = 0x61ca2b;
        iVar3 = FUN_00609bc8(iVar5);
      }
      else if ((int)DAT_006d48f4 <= *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x184 + iVar5 * 0x1bc)) {
        local_28 = 0x61ca50;
        iVar3 = FUN_00609bc8(iVar5);
      }
      if ((*(char *)(*(int *)PTR_DAT_0066b238 + 0xf4 +
                    *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + iVar5 * 0x1bc) * 0xf8) == '\0') &&
         (*(char *)(*(int *)PTR_DAT_0066b238 + 0xf4 +
                   *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + iVar5 * 0x1bc) * 0xf8) == '\0')) {
        local_28 = 0x61caaf;
        FUN_0061c6f4(local_8,DAT_006d48f4,iVar5);
      }
      if (0 < iVar3) {
        local_28 = 0x61cabd;
        FUN_0061b828(local_8,iVar3);
      }
      iVar5 = iVar5 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  if (((DAT_006d48f4 & 1) == 0) && ((int)DAT_006d48f4 < 0xb7)) {
    local_28 = 0x61caee;
    uVar2 = FUN_00651e70(DAT_006d48f4);
    local_28 = 0x61caf6;
    FUN_00409dd8(uVar2,&stack0xffffffe8);
    local_28 = 0x61cb03;
    FUN_00404bac(&stack0xffffffe8,&DAT_0061cd9c);
    local_28 = 0x61cb0e;
    FUN_004051d4(&stack0xffffffec,unaff_ESI);
    local_28 = 0x61cb1f;
    FUN_004e1414(*(undefined4 *)(local_8 + 0x30c),unaff_EBX);
    if (PTR_DAT_0066ac78[0xdd] == '\0') {
      local_28 = 0x61cb55;
      FUN_0054f18c(*(undefined4 *)(local_8 + 0x2f8),0x2d);
    }
    else {
      local_28 = 0x61cb40;
      FUN_0054f18c(*(undefined4 *)(local_8 + 0x2f8),0x5a);
    }
    local_28 = 0x61cb5f;
    uVar2 = FUN_00651e70(DAT_006d48f4);
    local_28 = 0x61cb6f;
    FUN_0054f23c(*(undefined4 *)(local_8 + 0x2f8),uVar2);
  }
  if (DAT_006d48f4 == 0x5c) {
    *(undefined4 *)PTR_DAT_0066b5ec = 1;
    *(undefined4 *)PTR_DAT_0066af54 = 1;
    local_28 = 0x61cb9f;
    FUN_00642c50(0x1fa,&local_1c);
    local_28 = 0x61cbb0;
    FUN_004e1414(*(undefined4 *)(local_8 + 0x30c),local_1c);
    if (PTR_DAT_0066ac78[0xdc] != '\0') {
      local_28 = 0x61cbc8;
      FUN_0055d080("intervalo");
    }
    if (((PTR_DAT_0066ac78[0xd9] != '\0') && (0 < *(int *)(PTR_DAT_0066ac78 + 0x13c))) &&
       (0 < DAT_006d4794)) {
      local_c = DAT_006d4794;
      piVar4 = &DAT_006d4494;
      do {
        iVar5 = *piVar4;
        if ((0 < iVar5) && (iVar5 <= *(int *)PTR_DAT_0066aea4)) {
          *(int *)PTR_DAT_0066ad84 = iVar5;
          local_28 = 0x61cc25;
          FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_006004f8,PTR_DAT_0066b090);
          local_28 = 0x61cc34;
          (**(code **)(**(int **)PTR_DAT_0066b090 + 0xec))();
        }
        piVar4 = piVar4 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    if (0 < *(int *)PTR_DAT_0066aea4) {
      iVar5 = 1;
      local_c = *(int *)PTR_DAT_0066aea4;
      do {
        local_28 = 0x61cc5e;
        FUN_00545088(*(undefined4 *)(DAT_006d4784 + iVar5 * 4),0);
        iVar3 = *(int *)(DAT_006d492c + iVar5 * 4);
        if (*(int *)(iVar3 + 0x168) != 0) {
          local_28 = 0x61cc76;
          FUN_0043aa68(iVar3,0);
        }
        iVar5 = iVar5 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    *(undefined4 *)PTR_DAT_0066b2cc = 2;
    local_28 = 0x61cc94;
    FUN_0064d5d4(2,&local_20);
    local_28 = 0x61cca5;
    FUN_004e1414(*(undefined4 *)(local_8 + 0x2fc),local_20);
    *(undefined4 *)PTR_DAT_0066af54 = 0;
    if (PTR_DAT_0066ac78[0xdd] == '\0') {
      local_28 = 0x61cccc;
      FUN_0054f23c(*(undefined4 *)(local_8 + 0x2f8),0);
    }
  }
  if (DAT_006d48f4 == 0xb6) {
    local_28 = 0x61cce5;
    FUN_00642c50(0x1fb,&local_24);
    local_28 = 0x61ccf6;
    FUN_004e1414(*(undefined4 *)(local_8 + 0x30c),local_24);
  }
  if (DAT_006d48f4 == 0xbe) {
    local_28 = 0x61cd0e;
    FUN_0043b234(DAT_006d4918,0);
    local_28 = 0x61cd1b;
    FUN_00642c50(0x1fc,&local_28);
    uVar2 = local_28;
    local_28 = 0x61cd2c;
    FUN_004e1414(*(undefined4 *)(local_8 + 0x30c),uVar2);
    DAT_006d48f4 = 0;
    local_28 = 0x61cd3b;
    FUN_0061f604(local_8);
  }
  else {
    local_28 = 0x61cd49;
    FUN_0043b234(DAT_006d4918,1);
  }
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_0061cd80;
  local_20 = (undefined1 *)0x61cd63;
  FUN_00405008(&local_28,4,puVar1);
  local_20 = (undefined1 *)0x61cd6b;
  FUN_004048d4(&stack0xffffffe8);
  local_20 = (undefined1 *)0x61cd78;
  FUN_00405008(&stack0xffffffec,2);
  return;
}

