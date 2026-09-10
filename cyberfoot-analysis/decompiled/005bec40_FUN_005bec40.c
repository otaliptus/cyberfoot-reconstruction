// Address: 005bec40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bec40(int param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  code *local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  local_c = param_1;
  local_8 = param_3;
  if (*(int *)(*(int *)(param_1 + 0x208) + 0x30) < 300) {
    puStack_24 = (undefined1 *)0x5bec6c;
    FUN_005beaa0(param_1,param_2,param_3);
  }
  else {
    puStack_24 = (undefined1 *)0x5bec7c;
    FUN_005be7d4(param_1,param_2,&local_14);
    if (0xffff < (int)local_14) {
      puStack_28 = &LAB_005becfd;
      uStack_2c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_2c;
      iVar3 = local_8[2];
      if (iVar3 != 0) {
        bVar1 = false;
        puVar4 = (undefined4 *)(*local_8 + iVar3 * 0x10);
        do {
          puVar4 = puVar4 + -4;
          uVar2 = (ushort)*puVar4;
          if (uVar2 < 5) {
            if (uVar2 != 4) {
LAB_005becbb:
              if (!bVar1) {
                bVar1 = true;
              }
            }
          }
          else if (7 < uVar2) goto LAB_005becbb;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      puStack_24 = &stack0xfffffffc;
      (*local_14)(local_10,local_c);
      *in_FS_OFFSET = uStack_2c;
    }
  }
  return;
}

