// Address: 00635ce0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_barraMouseMove
               (int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = &LAB_00635f60;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  bVar1 = false;
  if ((((param_5 < 0x1e) || (0x46 < param_5)) || (param_4 < 8)) || (0x2f < param_4)) {
    if (((param_5 < 0x54) || (0x7e < param_5)) || ((param_4 < 8 || (0x2f < param_4)))) {
      if (((param_5 < 0x92) || (0xbe < param_5)) || ((param_4 < 8 || (0x2f < param_4)))) {
        if ((((param_5 < 0xd0) || (0xf3 < param_5)) || (param_4 < 8)) || (0x2f < param_4)) {
          if (((param_5 < 0x104) || (0x129 < param_5)) || ((param_4 < 8 || (0x2f < param_4)))) {
            if (((param_5 < 0x139) || (0x16b < param_5)) || ((param_4 < 8 || (0x2f < param_4)))) {
              if ((((param_5 < 0x17e) || (0x1a5 < param_5)) || (param_4 < 8)) || (0x2f < param_4)) {
                if (((param_5 < 0x1b8) || (0x1d8 < param_5)) || ((param_4 < 8 || (0x2f < param_4))))
                {
                  if ((((param_5 < 0x1f0) || (0x214 < param_5)) || (param_4 < 8)) ||
                     (0x2f < param_4)) {
                    puVar2 = &stack0xfffffffc;
                    if ((((0x226 < param_5) && (puVar2 = &stack0xfffffffc, param_5 < 0x24c)) &&
                        (puVar2 = &stack0xfffffffc, 7 < param_4)) &&
                       (puVar2 = &stack0xfffffffc, param_4 < 0x30)) {
                      bVar1 = true;
                      FUN_00642c50(0x7d,&local_8);
                      puVar2 = puStack_24;
                    }
                  }
                  else {
                    bVar1 = true;
                    puStack_24 = &stack0xfffffffc;
                    FUN_00642c50(0x7c,&local_8);
                    puVar2 = puStack_24;
                  }
                }
                else {
                  bVar1 = true;
                  puStack_24 = &stack0xfffffffc;
                  FUN_00642c50(0x7b,&local_18);
                  FUN_004052cc(&local_8,local_18,L" - F7");
                  puVar2 = puStack_24;
                }
              }
              else {
                bVar1 = true;
                puStack_24 = &stack0xfffffffc;
                FUN_00642c50(0x7a,&local_14);
                FUN_004052cc(&local_8,local_14,L" - F8");
                puVar2 = puStack_24;
              }
            }
            else {
              bVar1 = true;
              puStack_24 = &stack0xfffffffc;
              FUN_00642c50(0x79,&local_8);
              puVar2 = puStack_24;
            }
          }
          else {
            bVar1 = true;
            puStack_24 = &stack0xfffffffc;
            FUN_00642c50(0x3e1,&local_10);
            FUN_004052cc(&local_8,local_10,L" - F6");
            puVar2 = puStack_24;
          }
        }
        else {
          bVar1 = true;
          puStack_24 = &stack0xfffffffc;
          FUN_00642c50(0x78,&local_c);
          FUN_004052cc(&local_8,local_c,L" - F5");
          puVar2 = puStack_24;
        }
      }
      else {
        bVar1 = true;
        puStack_24 = &stack0xfffffffc;
        FUN_00642c50(0x6d,&local_8);
        puVar2 = puStack_24;
      }
    }
    else {
      bVar1 = true;
      puStack_24 = &stack0xfffffffc;
      FUN_00642c50(0x69,&local_8);
      puVar2 = puStack_24;
    }
  }
  else {
    bVar1 = true;
    puStack_24 = &stack0xfffffffc;
    FUN_00642c50(0x5e,&local_8);
    puVar2 = puStack_24;
  }
  puStack_24 = puVar2;
  if (bVar1) {
    FUN_00466414(*(undefined4 *)(param_1 + 0x39c),0xffeb);
    if (*PTR_DAT_0066b700 == '\0') {
      FUN_00404b6c(*(int *)(param_1 + 0x39c) + 0x80,local_8);
      FUN_00466358(*(undefined4 *)(param_1 + 0x39c),1);
    }
  }
  else {
    FUN_00466358(*(undefined4 *)(param_1 + 0x39c),0);
    FUN_00466414(*(undefined4 *)(param_1 + 0x39c),0);
  }
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00635f67;
  puStack_28 = (undefined1 *)0x635f5f;
  FUN_00405008(&local_18,5,puVar2);
  return;
}

