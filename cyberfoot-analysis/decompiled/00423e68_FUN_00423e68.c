// Address: 00423e68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00423e68(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int local_c;
  
  local_c = param_3;
  local_c = FUN_00421ec8(param_1,*(undefined4 *)(param_1 + 0x18),param_2);
  if (((local_c == 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
     (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18))) {
    local_c = FUN_00421ec8(param_1,*(undefined4 *)(param_1 + 0x1c),param_2);
  }
  if (*(short *)(param_1 + 0x62) != 0) {
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100),param_1,param_2,&local_c);
  }
  if ((local_c != 0) && (cVar1 = thunk_FUN_00403cb4(local_c,PTR_PTR_0041c690), cVar1 != '\0')) {
    return local_c;
  }
  FUN_0041d480(param_2);
  return local_c;
}

