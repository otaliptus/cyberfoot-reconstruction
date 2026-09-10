// Address: 004d6c7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_004d6c7c(undefined4 param_1,int param_2,undefined4 param_3,code *param_4,undefined4 param_5
                 )

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_18 = 0;
  local_10 = 0;
  local_14 = 0;
  local_8 = param_1;
  if (param_4._2_2_ != 0) {
    (*param_4)(param_5,&local_c,&local_18,&local_14,&local_10);
  }
  cVar1 = FUN_004d6c4c(local_c,local_18,local_14);
  bVar4 = true;
  if ((*(int *)(param_2 + 4) != 0) && (*(int *)(param_2 + 8) != 0)) {
    iVar2 = FUN_00419ee8(local_8,param_2);
    if (cVar1 == '\0') {
      if ((*(int *)(param_2 + 0x14) == -0x80000000) || (*(int *)(param_2 + 0x14) != iVar2)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    }
    else {
      iVar3 = FUN_00419ee8(local_c,param_2);
      bVar4 = iVar2 == iVar3;
    }
  }
  return bVar4;
}

