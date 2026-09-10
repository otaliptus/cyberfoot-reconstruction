// Address: 00625098
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00625098(void)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int *in_FS_OFFSET;
  int iStack_3ec;
  undefined1 *puStack_3e8;
  undefined1 *puStack_3e4;
  undefined1 *puStack_3e0;
  undefined1 *puStack_3dc;
  undefined1 *puStack_3d8;
  undefined1 local_3c8 [32];
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined1 local_3a0 [256];
  undefined4 local_2a0;
  uint local_29c [75];
  undefined1 local_170 [12];
  undefined4 local_164;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_3a8 = 0;
  local_3a4 = 0;
  local_2a0 = 0;
  puStack_3d8 = (undefined1 *)0x6250c9;
  FUN_00405628(local_170,PTR_DAT_00408718);
  puStack_3dc = &LAB_00625811;
  puStack_3e0 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_3e0;
  local_29c[0x20] = 1;
  local_29c[0xd] = 3;
  local_29c[0x40] = 5;
  local_29c[0x19] = 9;
  local_29c[0x3c] = 10;
  local_29c[1] = 0xb;
  local_29c[0x1d] = 0xe;
  local_29c[0x29] = 0xf;
  local_29c[0x15] = 0x15;
  local_29c[0x38] = 0x19;
  local_29c[7] = 0x1a;
  local_29c[0] = 0x1d;
  local_29c[0x2b] = 0x1f;
  local_29c[0x1b] = 0x26;
  local_29c[0x3e] = 0x24;
  local_29c[0x49] = 0x27;
  local_29c[5] = 0x2a;
  local_29c[0x37] = 0x2c;
  local_29c[0x22] = 0x2b;
  local_29c[4] = 0x2e;
  local_29c[0x39] = 0x2f;
  local_29c[0x23] = 0x31;
  local_29c[0x1a] = 0x33;
  local_29c[0x3a] = 0x32;
  local_29c[0x2a] = 0x34;
  local_29c[0x33] = 0x36;
  local_29c[0x1e] = 0x39;
  local_29c[0x35] = 0x3b;
  local_29c[0x45] = 0x43;
  local_29c[6] = 0x3c;
  local_29c[0x26] = 0x3e;
  local_29c[0x4a] = 0x40;
  local_29c[0xc] = 0x41;
  local_29c[0x1c] = 0x44;
  local_29c[0xe] = 0x48;
  local_29c[0x3b] = 0x4b;
  local_29c[0x2e] = 0x4c;
  local_29c[0x18] = 0x4e;
  local_29c[0x48] = 0x51;
  local_29c[0x28] = 0x55;
  local_29c[0x2c] = 0x58;
  local_29c[0xf] = 0x61;
  local_29c[0x31] = 0x1b;
  local_29c[0xb] = 0x68;
  local_29c[0x3f] = 0x5f;
  local_29c[0x41] = 0x62;
  local_29c[0x12] = 0x6b;
  local_29c[0x3d] = 0x7f;
  local_29c[0x1f] = 0x81;
  local_29c[10] = 0x83;
  local_29c[0x25] = 0x8d;
  local_29c[0x2f] = 0x8e;
  local_29c[0x24] = 0x8f;
  local_29c[3] = 0x96;
  local_29c[8] = 0x97;
  local_29c[0x32] = 0x98;
  local_29c[0x10] = 0x9a;
  local_29c[0x14] = 0x9f;
  local_29c[0x16] = 0xa0;
  local_29c[0x11] = 0xa2;
  local_29c[0x17] = 0xab;
  local_29c[0x44] = 0xb2;
  local_29c[0x2d] = 0xb3;
  local_29c[0x30] = 0xb4;
  local_29c[0x43] = 0xb7;
  local_29c[0x21] = 0xbe;
  local_29c[0x13] = 0xc0;
  local_29c[0x27] = 0xc1;
  local_29c[2] = 0xc3;
  local_29c[0x42] = 0xc4;
  local_29c[9] = 0xc6;
  local_29c[0x34] = 0x9d;
  local_29c[0x36] = 0x94;
  local_29c[0x47] = 200;
  local_29c[0x46] = 0xc9;
  local_18 = 0;
  puStack_3e4 = (undefined1 *)0x6253df;
  puStack_3d8 = &stack0xfffffffc;
  iVar3 = FUN_0040a4d4("teams\\*.b15",0x3f,local_170);
  if (iVar3 == 0) {
    puStack_3e4 = (undefined1 *)0x20;
    puStack_3e8 = (undefined1 *)0x6253ff;
    FUN_00404bf0(&local_2a0,"teams\\",local_164);
    puStack_3e8 = (undefined1 *)0x625411;
    local_8 = (int *)FUN_00420dec(PTR_PTR_0041bfa0,1,local_2a0);
    puStack_3e8 = &LAB_006254ac;
    iStack_3ec = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_3ec;
    puStack_3e4 = &stack0xfffffffc;
    FUN_004060a8(&DAT_006d493c,PTR_DAT_00624f70,1,1);
    (**(code **)(*local_8 + 0xc))(local_8,&local_c,4);
    iVar3 = local_18;
    (**(code **)(*local_8 + 0xc))(local_8,DAT_006d493c + local_18 * 200,200);
    FUN_00404b80(local_3a0,local_164,0xff);
    FUN_004030e0(DAT_006d493c + 0x57 + iVar3 * 200,local_3a0,0x19);
    puVar1 = puStack_3e4;
    *in_FS_OFFSET = iStack_3ec;
    puStack_3e4 = (undefined1 *)0x625585;
    puStack_3e8 = (undefined1 *)0x6254ab;
    FUN_00403a84(local_8,iStack_3ec,puVar1);
    return;
  }
  puStack_3e4 = (undefined1 *)0x625590;
  iVar3 = FUN_0040a524(local_170);
  if (iVar3 == 0) {
    puStack_3e4 = (undefined1 *)0x20;
    puStack_3e8 = (undefined1 *)0x6254cb;
    FUN_00404bf0(&local_3a4,"teams\\",local_164);
    puStack_3e8 = (undefined1 *)0x6254dd;
    local_8 = (int *)FUN_00420dec(PTR_PTR_0041bfa0,1,local_3a4);
    puStack_3e8 = &LAB_0062557e;
    iStack_3ec = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_3ec;
    iVar3 = local_18 + 2;
    puStack_3e4 = &stack0xfffffffc;
    local_18 = local_18 + 1;
    FUN_004060a8(&DAT_006d493c,PTR_DAT_00624f70,1,iVar3);
    (**(code **)(*local_8 + 0xc))(local_8,&local_c,4);
    iVar3 = local_18;
    (**(code **)(*local_8 + 0xc))(local_8,DAT_006d493c + local_18 * 200,200);
    FUN_00404b80(local_3a0,local_164,0xff);
    FUN_004030e0(DAT_006d493c + 0x57 + iVar3 * 200,local_3a0,0x19);
    puVar1 = puStack_3e4;
    *in_FS_OFFSET = iStack_3ec;
    puStack_3e4 = (undefined1 *)0x625585;
    puStack_3e8 = (undefined1 *)0x62557d;
    FUN_00403a84(local_8,iStack_3ec,puVar1);
    return;
  }
  puStack_3e4 = (undefined1 *)0x6255a3;
  FUN_0040a548(local_170);
  puStack_3e4 = (undefined1 *)0x6255ad;
  DAT_006d4938 = FUN_00405eec(DAT_006d493c);
  puStack_3e4 = (undefined1 *)(DAT_006d4938 + -1);
  puStack_3e8 = &LAB_00625038;
  iStack_3ec = 0x6255cf;
  FUN_004bcdb0(DAT_006d493c,200,0);
  local_c = 1;
  puVar4 = local_29c;
  do {
    iStack_3ec = 0x6255e3;
    iVar3 = FUN_0065208c(*puVar4);
    if (iVar3 == -1) {
      if (local_c == 1) {
        local_10 = 0xf;
      }
      else if (local_c == 2) {
        local_10 = 0xf;
      }
      else if (local_c < 0xc) {
        if (local_c < 0x14) {
          local_10 = 0xc;
        }
        else {
          local_10 = 7;
        }
      }
      else {
        local_10 = 0xc;
      }
      iStack_3ec = 0x625637;
      iVar3 = FUN_00405ef4(DAT_006d493c);
      if (-1 < iVar3) {
        iVar3 = iVar3 + 1;
        iVar5 = 0;
        do {
          if ((uint)*(byte *)(DAT_006d493c + iVar5 * 200) == *puVar4) {
            iStack_3ec = 0x62566c;
            FUN_004030d4(local_3c8,&DAT_00625844);
            iStack_3ec = 0x625689;
            FUN_004030a4(local_3c8,DAT_006d493c + 0x57 + iVar5 * 200,0x1f);
            iStack_3ec = 0x62569a;
            FUN_00404b48(&local_3a8,local_3c8);
            iStack_3ec = 0x6256a5;
            cVar2 = FUN_0040a43c(local_3a8);
            if (((cVar2 != '\0') && (*(char *)(DAT_006d493c + 1 + iVar5 * 200) != '\0')) &&
               (*(char *)(DAT_006d493c + 2 + iVar5 * 200) == '\x0f')) {
              local_10 = local_10 + -1;
              *(int *)(PTR_DAT_0066ac78 + 0x40) = *(int *)(PTR_DAT_0066ac78 + 0x40) + 1;
              iStack_3ec = 0x6256f2;
              local_14 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066af70);
              if (*(int *)(PTR_DAT_0066ac78 + 0xc4) < 0xca) {
                iStack_3ec = local_14 + 1;
                FUN_004060a8(PTR_DAT_0066af70,PTR_DAT_00488b20,1);
              }
              iStack_3ec = local_14 + 1;
              FUN_004060a8(PTR_DAT_0066b4e0,PTR_DAT_00488b80,1);
              if (*(int *)(PTR_DAT_0066ac78 + 0xc4) < 0xca) {
                iStack_3ec = 0x625777;
                FUN_004030e0(*(int *)PTR_DAT_0066af70 + local_14 * 0x2f8,
                             DAT_006d493c + 4 + iVar5 * 200,0x19);
                *(uint *)(*(int *)PTR_DAT_0066af70 + 0x3c + local_14 * 0x2f8) =
                     (uint)*(byte *)(DAT_006d493c + iVar5 * 200);
              }
              iStack_3ec = 0x6257b9;
              FUN_00404b48(*(int *)PTR_DAT_0066b4e0 + local_14 * 4,DAT_006d493c + 0x57 + iVar5 * 200
                          );
              if (local_10 == 0) break;
            }
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    puVar1 = puStack_3e0;
    local_c = local_c + 1;
    puVar4 = puVar4 + 1;
    if (local_c == 0x4c) {
      *in_FS_OFFSET = (int)puStack_3e8;
      puStack_3e0 = &LAB_00625818;
      puStack_3e4 = (undefined1 *)0x6257f4;
      FUN_004048f8(&local_3a8,2,puVar1);
      puStack_3e4 = (undefined1 *)0x6257ff;
      FUN_004048d4(&local_2a0);
      puStack_3e4 = (undefined1 *)0x625810;
      FUN_004056f8(local_170,PTR_DAT_00408718);
      return;
    }
  } while( true );
}

