// Address: 00545144
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00545144(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  int *in_FS_OFFSET;
  byte bVar3;
  undefined4 auStackY_1824 [1494];
  undefined1 *puVar4;
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
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  
  bVar3 = 0;
  puStack_58 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_5c = &LAB_005452b6;
  iStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_60;
  local_c = param_3;
  local_8 = param_2;
  (**(code **)(*param_1 + 0x44))(param_1,&local_38);
  if (((char)param_1[0x74] != '\0') || (*(char *)((int)param_1 + 0x1d1) != '\0')) {
    InflateRect(&local_38,-param_1[0x75],-param_1[0x75]);
  }
  if ((char)param_1[0x77] == '\x01') {
    InflateRect(&local_38,-param_1[0x76],-param_1[0x76]);
  }
  (**(code **)(*param_1 + 0x94))(param_1,&local_18);
  FUN_00404ff0(&local_1c);
  FUN_0041c990(0xffffffff,0xffffffff,0xffffffff,&local_48,0xffffffff);
  puVar2 = param_5 + (uint)bVar3 * -2 + 1;
  *param_5 = local_48;
  *puVar2 = auStack_44[(uint)bVar3 * -2];
  puVar2[(uint)bVar3 * -2 + 1] = auStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  (puVar2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
       (auStack_44 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
  puVar4 = local_28;
  cVar1 = (**(code **)(*param_1 + 0x9c))
                    (param_1,param_1[0x58],local_18,param_5,param_1 + 0x7b,puVar4,local_14,local_10,
                     &local_24,&local_20,&local_1c,0x1fffffff,0x1fffffff,0x1fffffff,0xffffff,0,
                     0x3ff00000,CONCAT31((int3)((uint)param_1[0x78] >> 8),(char)param_1[0x7a]),0,0,0
                     ,0,1,param_1[0x78],0xffffffff,0xffffffff,local_c,local_8,param_1[0x70],
                     &local_38);
  if (cVar1 == '\0') {
    param_1[0x7b] = -1;
  }
  else {
    FUN_00404b6c(param_4,local_1c);
  }
  *in_FS_OFFSET = (int)param_5;
  FUN_00405008(&local_24,4,puVar4,&LAB_005452bd);
  return;
}

