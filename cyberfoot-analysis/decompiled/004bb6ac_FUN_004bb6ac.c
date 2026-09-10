// Address: 004bb6ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bb6ac(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_FS_OFFSET;
  byte bVar5;
  undefined4 auStackY_1824 [1494];
  undefined1 *puVar6;
  int iStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_48;
  undefined4 auStack_44 [3];
  tagRECT local_38;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  
  bVar5 = 0;
  puStack_58 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_5c = &LAB_004bb8f0;
  iStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_60;
  local_c = param_3;
  local_8 = param_2;
  (**(code **)(*param_1 + 0x44))(param_1,&local_38);
  if (((char)param_1[0x74] != '\0') || (*(char *)((int)param_1 + 0x1d1) != '\0')) {
    InflateRect(&local_38,-param_1[0x75],-param_1[0x75]);
  }
  InflateRect(&local_38,-param_1[0x76],-param_1[0x76]);
  (**(code **)(*param_1 + 0x98))(param_1,&local_18);
  FUN_004048d4(&local_1c);
  FUN_0040709c(0xffffffff,0xffffffff,0xffffffff,&local_48,0xffffffff);
  puVar4 = param_5 + (uint)bVar5 * -2 + 1;
  *param_5 = local_48;
  *puVar4 = auStack_44[(uint)bVar5 * -2];
  puVar4[(uint)bVar5 * -2 + 1] = auStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (auStack_44 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  (**(code **)(**(int **)(param_1[0x58] + 0xc) + 8))(*(int **)(param_1[0x58] + 0xc),param_1[0x1a]);
  if (((byte)((char)param_1[0x7f] - 1U) < 2) &&
     ((**(code **)(*param_1 + 0xa4))
                (param_1,param_1[0x58],local_18,param_5,param_1 + 0x7b,local_28,&local_14,local_10,
                 &local_24,&local_20,&local_1c,param_1[0x79],param_1[0x7e],param_1[0x7d],
                 param_1[0x73],0,0x3ff00000,
                 CONCAT31((int3)((uint)param_1[0x78] >> 8),(char)param_1[0x7a]),0,0,0,0,1,
                 param_1[0x78],0xffffffff,0xffffffff,local_c,local_8,param_1[0x70],&local_38),
     local_14 < param_1[0x13])) {
    if ((char)param_1[0x7f] == '\x01') {
      uVar2 = (local_38.bottom - local_38.top) - local_14;
      iVar3 = (int)uVar2 >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
      }
      local_38.top = local_38.top + iVar3;
    }
    else if ((char)param_1[0x7f] == '\x02') {
      local_38.top = local_38.bottom - local_14;
    }
  }
  puVar6 = local_28;
  cVar1 = (**(code **)(*param_1 + 0xa4))
                    (param_1,param_1[0x58],local_18,param_5,param_1 + 0x7b,puVar6,&local_14,local_10
                     ,&local_24,&local_20,&local_1c,0x1fffffff,0x1fffffff,0x1fffffff,0xffffff,0,
                     0x3ff00000,CONCAT31((int3)((uint)param_1[0x78] >> 8),(char)param_1[0x7a]),0,0,0
                     ,0,1,param_1[0x78],0xffffffff,0xffffffff,local_c,local_8,param_1[0x70],
                     &local_38);
  if (cVar1 == '\0') {
    param_1[0x7b] = -1;
  }
  else {
    FUN_00404928(param_4,local_1c);
  }
  *in_FS_OFFSET = (int)param_5;
  FUN_004048f8(&local_24,4,puVar6,&LAB_004bb8f7);
  return;
}

