/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortMergeInsertion.tpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 10:32:55 by gbricot           #+#    #+#             */
/*   Updated: 2024/03/26 11:03:20 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template < typename T >
void	insertion( T &arr, int start, int end)
{
	for (int i = start + 1; i <= end; i++)
	{
		int	key = arr.at(i);
		int	j = i - 1;
		while (j >= start && arr.at(j) > key)
		{
			arr.at(j + 1) = arr.at(j);
			j--;
		}
		arr.at(j + 1) = key;
	}
}

template <typename T>
void	merge( T& arr, int start, int mid, int end)
{
	int	n1 = mid - start + 1;
	int	n2 = end - mid;
	T	left(n1), right(n2);

	int i = 0, j = 0;
	for (i = 0; i < n1; i++)
		left.at(i) = arr.at(start + i);
	for (j = 0; j < n2; j++)
		right.at(j) = arr.at(mid + 1 + j);
	i = 0;
	j = 0;
	int	k = start;
	while (i < n1 && j < n2)
	{
		if (left.at(i) <= right.at(j))
			arr.at(k++) = left.at(i++);
		else
			arr.at(k++) = right.at(j++);
	}
	while (i < n1)
		arr.at(k++) = left.at(i++);
	while (j < n2)
		arr.at(k++) = right.at(j++);
}

template <typename T> /* T must be a container filled with int */
void	mergeInsertionSort(T& arr, int start, int end, int k)
{
	if (start < end)
	{
		if (end - start + 1 <= k)
			insertion(arr, start, end);
		else
		{
			int	mid = start + (end - start) / 2;
			mergeInsertionSort(arr, start, mid, k);
			mergeInsertionSort(arr, mid + 1, end, k);
			merge(arr, start, mid, end);
		}
	}
}